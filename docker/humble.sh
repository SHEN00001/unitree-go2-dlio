#!/bin/bash

# xhost設定を追加してローカル接続を許可
xhost +local:docker

# XAUTHファイルの生成
XAUTH=/tmp/.docker.xauth
if [ ! -f $XAUTH ]; then
    touch $XAUTH
    xauth_list=$(xauth nlist :0 | sed -e 's/^..../ffff/')
    if [ ! -z "$xauth_list" ]; then
        echo $xauth_list | xauth -f $XAUTH nmerge -
    fi
    chmod a+r $XAUTH
fi

# Dockerコンテナの実行
docker run -it --rm \
  --privileged \
  --runtime=nvidia \
  --net=host \
  --env="DISPLAY=$DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --env="XAUTHORITY=$XAUTH" \
  --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
  --volume="$XAUTH:$XAUTH" \
  --volume="${PWD}:/external:rw" \
  go2-humble:latest bash
