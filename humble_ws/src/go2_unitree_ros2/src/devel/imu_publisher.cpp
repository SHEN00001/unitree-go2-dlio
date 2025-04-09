#include <cmath>
#include <iostream>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "unitree_go/msg/sport_mode_state.hpp"

class ImuPublisher : public rclcpp::Node {
public:
    ImuPublisher()
    : Node("imu_publisher") {
        imu_pub_ = this->create_publisher<sensor_msgs::msg::Imu>("/go2/imu", 10);
        state_sub_ = this->create_subscription<unitree_go::msg::SportModeState>(
            "sportmodestate", 10, std::bind(&ImuPublisher::stateCallback, this, std::placeholders::_1));
    }

private:
    void stateCallback(const unitree_go::msg::SportModeState::SharedPtr data) {
        auto imu_msg = sensor_msgs::msg::Imu();
        imu_msg.header.stamp = this->get_clock()->now();
        imu_msg.header.frame_id = "imu_link";

        imu_msg.orientation.w = data->imu_state.quaternion[0];
        imu_msg.orientation.x = data->imu_state.quaternion[1];
        imu_msg.orientation.y = data->imu_state.quaternion[2];
        imu_msg.orientation.z = data->imu_state.quaternion[3];

        imu_msg.angular_velocity.x = data->imu_state.gyroscope[0];
        imu_msg.angular_velocity.y = data->imu_state.gyroscope[1];
        imu_msg.angular_velocity.z = data->imu_state.gyroscope[2];

        imu_msg.linear_acceleration.x = data->imu_state.accelerometer[0];
        imu_msg.linear_acceleration.y = data->imu_state.accelerometer[1];
        imu_msg.linear_acceleration.z = data->imu_state.accelerometer[2];

        imu_pub_->publish(imu_msg);

        RCLCPP_INFO(this->get_logger(), "IMU message published!");
    }

    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub_;
    rclcpp::Subscription<unitree_go::msg::SportModeState>::SharedPtr state_sub_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImuPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
