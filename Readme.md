1. Run the following commands:
    ```bash
    chmod +x run.sh
    ./run.sh
    ```
    You should see the following output:
    ```bash
    Docker container started successfully with ID: xxxx
    To connect to the container, use the following command:
    docker exec -it xxxx /bin/bash
    ```

2. Run `docker exec -it xxxx /bin/bash` to connect to the container.

3. Your code files should be located in the `src` folder.

4. Inside the container, run the following commands:
    ```bash
    cd build
    cmake ..
    make
    ```

5. You will then see the executable file in the `build` folder.
