#include "rclcpp/rclcpp.hpp"
#include "sport_rotation.h"
#include <thread>

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("rotation_node");
    auto rotation = std::make_shared<sport_rotation>(node);

    // spinを別スレッドで実行
    std::thread spin_thread([&]() { rclcpp::spin(node); });

    // 明示的に動作を開始する
    rotation->Start();

    // 180度回転が完了するまで待機
    rotation->WaitForRotationToComplete();
    std::cout << "180 degree rotation has completed." << std::endl;

    // spinスレッドが終了するのを待つ
    spin_thread.join();

    rclcpp::shutdown();

    return 0;
}
