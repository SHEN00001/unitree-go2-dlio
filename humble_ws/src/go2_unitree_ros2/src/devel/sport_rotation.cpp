#include "sport_rotation.h"
#include <cmath>
#include <iostream>

sport_rotation::sport_rotation(rclcpp::Node::SharedPtr node)
    : node_(node), rotation_started(false), rotation_complete(false)
{
    req_puber = node_->create_publisher<unitree_api::msg::Request>("/api/sport/request", 10);
}

void sport_rotation::Start()
{
    rotation_started = false;
    rotation_complete = false; 
    
    // サブスクリプションを作成し、ロボットの動作を開始する
    state_suber = node_->create_subscription<unitree_go::msg::SportModeState>(
        "sportmodestate", 10, std::bind(&sport_rotation::state_callback, this, std::placeholders::_1));
}

void sport_rotation::state_callback(const unitree_go::msg::SportModeState::SharedPtr data)
{
    if (!rotation_started) {
        initial_yaw = data->imu_state.rpy[2];
        rotation_started = true;
        std::cout << "Initial Yaw (Degrees): " << initial_yaw * (180.0 / M_PI) << std::endl;
    }

    double current_yaw = data->imu_state.rpy[2];
    double yaw_difference = std::fmod(current_yaw - initial_yaw + 3 * M_PI, 2 * M_PI) - M_PI;

    if (std::abs(yaw_difference - M_PI) < 5 * (M_PI / 180)) {
        sport_req.Move(req, 0, 0, 0);
        req_puber->publish(req);
        rotation_started = false;
        rotation_complete = true;
        std::cout << "Rotation completed. Current Yaw (Degrees): " << current_yaw * (180.0 / M_PI) << std::endl;
        Cleanup();
    } else {
        sport_req.Move(req, 0, 0, 0.5);
        req_puber->publish(req);
    }
}

void sport_rotation::Cleanup()
{
    state_suber.reset();
    RCLCPP_INFO(node_->get_logger(), "Rotation and subscription cleanup completed.");
}

void sport_rotation::WaitForRotationToComplete()
{
    // rotation_completeがtrueになるまでループ
    while (!rotation_complete) {
        // CPUリソースの消費を抑えるために、少しスリープする
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}