# Project Setup Guide

## Getting Started

This guide provides a detailed setup process for running the project on various operating systems, including specific instructions for Mac M-series (arm64) users.

### Prerequisites

- Docker installed on your machine.
- For Mac M-series chip users:
  - Install Mono from [Mono Project](https://www.mono-project.com/docs/getting-started/install/mac/). You can verify the installation by running `mono -V` in your terminal.
  - Modify Docker settings to use `osxfs(Legacy)` as the file sharing implementation for containers.
  - Uncheck "Use Rosetta for x86_64/amd64 emulation on Apple Silicon" and "Use Virtualization framework".

### Setting Up the Environment

1. Make the script files executable:
    ```bash
    chmod +x mono_mac.sh
    chmod +x run.sh
    ```

2. Start the project:
    ```bash
    ./run.sh
    ```

    You should see the following output:
    ```
    Docker container started successfully with ID: xxxx
    To connect to the container, use the following command:
    docker exec -it xxxx /bin/bash
    ```

### Accessing the Code

Your code files should be located in the `src` folder.

### Connecting to the Docker Container

Run the following command to connect to the Docker container:
```bash
docker exec -it xxxx /bin/bash
```

### Building the Project

1. Once inside the container, navigate to the build directory and compile the project:
    ```bash
    cd build
    cmake ..
    make
    ```

2. After running `make`, you will find the executable file in the `build` folder.

### Additional Instructions for Mac M-series Users

Before every build, execute the following script on your machine (not inside the container):
```bash
./mono_mac.sh
```