#include <cmath>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "unitree_go/msg/sport_mode_state.hpp"
#include "unitree_api/msg/request.hpp"
#include "common/ros2_sport_client.h"

using namespace std::placeholders;

class sport_request : public rclcpp::Node
{
public:
    sport_request() : Node("req_sender"), rotation_started(false), initial_yaw_set(false)
    {
        state_suber = this->create_subscription<unitree_go::msg::SportModeState>(
            "sportmodestate", 10, std::bind(&sport_request::state_callback, this, _1));
        req_puber = this->create_publisher<unitree_api::msg::Request>("/api/sport/request", 10);
    }

private:
    void state_callback(const unitree_go::msg::SportModeState::SharedPtr data)
    {
        if (!initial_yaw_set) {
            initial_yaw = data->imu_state.rpy[2]; // 初期ヨー角を設定
            initial_yaw_set = true;
            rotation_started = true; // 回転を開始
            std::cout << "Initial Yaw (Degrees): " << initial_yaw * (180.0 / M_PI) << std::endl;
        }

        if (rotation_started) {
            double current_yaw = data->imu_state.rpy[2];
            // 初期ヨー角からの差分を計算（-π から π の範囲で正規化）
            double yaw_difference = std::fmod(current_yaw - initial_yaw + 3 * M_PI, 2 * M_PI) - M_PI;

            // 180度（πラジアン）に5度の誤差を許容してチェック
            if (std::abs(yaw_difference - M_PI) < 5 * (M_PI / 180)) {
                // 目標の回転角に到達したら停止
                sport_req.Move(req, 0, 0, 0);
                req_puber->publish(req);
                rotation_started = false; // 回転の監視を終了
                std::cout << "Rotation completed. Current Yaw (Degrees): " << current_yaw * (180.0 / M_PI) << std::endl;
            } else {
                // 目標に達していなければ回転を継続
                sport_req.Move(req, 0, 0, 0.5); // ヨー角速度を調整して回転継続
                req_puber->publish(req);
            }
        }
    }

    rclcpp::Subscription<unitree_go::msg::SportModeState>::SharedPtr state_suber;
    rclcpp::Publisher<unitree_api::msg::Request>::SharedPtr req_puber;
    
    unitree_api::msg::Request req; // Unitree Go2 ROS2 request message
    SportClient sport_req;

    bool rotation_started;
    bool initial_yaw_set;
    double initial_yaw;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<sport_request>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
