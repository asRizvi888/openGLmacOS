# OpenGL setup for macOS
The most simple setup for OpenGL development in macOS.

# Prerequisite
- <b>Homebrew</b>

    check if homebrew is installed or not in your device by running `brew --version`

    If not found then install homebrew from [here]("https://brew.sh/")

- <b>VS Code</b>

    For ease of configuration this demonstration is done in VS Code. So you should have it installed in your device. Later we are going to use `C/C++` extentions for code completion, syntax high lighting & building our project.

# Installation

- <b>Compiler installation</b>

    Install gcc compiler to build the code. It supports both C or C++.

    ```
    brew install gcc
    ```

- <b>GLFW library installation</b>

    Install `GLFW` library by the following command to develop openGL programs.

    ```
    brew install glfw
    ```

- <b>Clone this repo</b>

    After all the installation clone this repository by the following command.

    ```
    git clone https://github.com/asRizvi888/openGLmacOS.git
    ```
    Then move to the directory you've just cloned and you are all set with the environment setup.

# Getting Started

1. Create a new folder in `src` directory, you can name it anything you want.

2. Then create `main.cpp` file inside the newly created folder.

    ```
    /..
    src
    |__new folder
        |__main.cpp
    ```

3. *Step 2 should be done everytime before crearing a new project.*

4. Copy the code from `template.cpp` and paste it in `main.cpp` file.

5. Make your changes inside the `draw()` function.

6. Don't forget to save the changes.

# Build & Run

- To build the code press `cmd + shift + b`. It should open a terminal in vscode that should show you the execution log with build messages. If build is successful then move to the next phase otherwise make changes to your code & rebuild it.

- Finally, run your code by changing directory to your project folder by using `cd` command in the terminal. Then run `./main` & your project should run perfectly.


