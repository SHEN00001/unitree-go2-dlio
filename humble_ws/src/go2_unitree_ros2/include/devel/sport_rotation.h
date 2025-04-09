#ifndef SPORT_ROTATION_H
#define SPORT_ROTATION_H

#include "rclcpp/rclcpp.hpp"
#include "unitree_go/msg/sport_mode_state.hpp"
#include "unitree_api/msg/request.hpp"
#include "common/ros2_sport_client.h"

#include <atomic>

class sport_rotation
{
public:
    // コンストラクタのシグネチャを変更して、NodeのSharedPtrを受け取る
    explicit sport_rotation(rclcpp::Node::SharedPtr node);
    
    void Start(); // 動作を開始するメソッド
    void WaitForRotationToComplete();

private:
    void state_callback(const unitree_go::msg::SportModeState::SharedPtr data);
    void Cleanup();

    rclcpp::Node::SharedPtr node_; // NodeのSharedPtrをメンバ変数として保持
    rclcpp::Subscription<unitree_go::msg::SportModeState>::SharedPtr state_suber;
    rclcpp::Publisher<unitree_api::msg::Request>::SharedPtr req_puber;
    
    unitree_api::msg::Request req;
    SportClient sport_req;

    bool rotation_started;
    double initial_yaw;

    std::atomic<bool> rotation_complete; // 回転が完了したかどうかのフラグ
};

#endif // SPORT_ROTATION_H
