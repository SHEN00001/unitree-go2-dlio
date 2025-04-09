# Go2ロボットとAprilTagによる180度回転デモ

## 概要

このプログラムは、特定のAprilTagを検出した際にUnitree Go2ロボットを180度回転させるデモです。このプロセスは、AprilTag検出サービスを利用し、検出されたタグのIDに応じてロボットの動作を制御します。

## 前提条件

- ROS 2 (Foxy以降を推奨)
- `unitree_ros2`: UnitreeのROS 2インターフェース
- Go2ロボットのSDKまたはROS環境がセットアップされていること

## セットアップ

### 1. 必要なパッケージのダウンロードとビルド

1. `unitree_ros2`がインストールされていることを確認します。
2. `https://github.com/TechShare-inc/simple_apriltag/tree/foxy_service`がインストールされていることを確認します。
3. 適切なワークスペースを作成し、Go2デモプログラムをダウンロードしてビルドします。

    ```bash
    mkdir -p go2_demo_ws/src
    cd go2_demo_ws/src
    git clone https://github.com/TechShare-inc/go2_unitree_ros2
    cd ..
    source /path/to/unitree_ros2/unitree_ros2_setup.sh
    source /path/to/detect_apriltag_ws/install/setup.bash
    colcon build
    ```

### 2. 実行方法

- **サービスサーバー**:

    別パッケージのAprilTag検出サービスを実行します。

    ```bash
    source /path/to/unitree_ros2/unitree_ros2_setup.sh
    cd detect_apriltag_ws
    source install/setup.bash
    ros2 run apriltag_service service_server_gst
    ```

- **サービスクライアント**:

    1. 環境をセットアップします。

        ```bash
        source /path/to/unitree_ros2/unitree_ros2_setup.sh
        source install/setup.bash
        ```

    2. デモプログラムを実行します。

        ```bash
        ros2 run go2_demo tag_move_demo
        ```

ID 303 (36h11フォーマット) のAprilTagが検出されると、Go2ロボットは180度回転します。

## 注意事項

- Go2ロボットのセットアップとAprilTagの環境については、それぞれの公式ドキュメントを参照してください。
- 実行パスや環境設定は、インストールした環境に応じて適宜変更してください。


## SportRotation.h

### 概要

`SportRotation`パッケージは、Unitreeロボットを指定された角度まで回転させる機能を提供します。この機能は、ロボットの現在の姿勢から目標の姿勢までの差を計算し、適切な回転命令をロボットに送信することによって実現されます。

### 機能

- **回転開始**: ロボットが回転を開始するためのコマンドを送信します。
- **回転の完了待ち**: ロボットが指定された角度まで回転を完了するのを待ちます。
- **状態の監視**: ロボットの現在の姿勢を監視し、目標の姿勢に達したかどうかを判断します。

### 依存関係

このパッケージは、以下のメッセージタイプに依存しています。

- `unitree_go/msg/SportModeState` (topic: /sportmodestate)
- `unitree_api/msg/Request` (topic: /api/sport/request)

また、`common/ros2_sport_client.h`ヘッダーファイルに定義された`SportClient`クラスを使用して、回転命令をロボットに送信します。


