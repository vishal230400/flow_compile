#!/bin/bash

CURRENT_DIR=$(pwd)

IMAGE_NAME="gyming1850/flow_compile"

CONTAINER_ID=$(docker run -d --mount type=bind,source="${CURRENT_DIR}/src",target="/flow_compile/src" ${IMAGE_NAME} tail -f /dev/null)

if [ -n "$CONTAINER_ID" ]; then
    echo "Docker container started successfully with ID: $CONTAINER_ID"
    echo "To connect to the container, use the following command:"
    echo "docker exec -it $CONTAINER_ID /bin/bash"
else
    echo "Failed to start Docker container."
fi