# Technical Documentation for Ze Geym (Dunno what it's about yet)

## Table of Contents
- [Project Overview](#project-overview)
- [Prerequisites](#prerequisites)
- [Project Structure](#project-structure)
- [Setting Up the Development Environment](#setting-up-the-development-environment)
- [Building and Executing the Program](#building-the-project)
- [Contributing](#contributing)
- [License](#license)

## Project Overview
This project is a simple 2D game developed using C++ and the SFML library. We're gonna try implementing a modular approach in making projects as opposed to a single-file noodle code structure.

## Prerequisites
Before setting up the project, ensure you have the following installed on your development machine:

1. **C++ Compiler**: A modern C++ compiler that supports C++14 (e.g., g++, clang).
2. **CMake**: Version 3.10 or higher for build configuration. You can install it via package managers or download it from the [CMake website](https://cmake.org/).
3. **SFML**: Version 2.5 or higher. You can install it via package managers or download it from [SFML's official website](https://www.sfml-dev.org).
4. **Git**: For version control and managing the project repository.
5. Things in the setup may differ depending on your IDE or Code Editor.

## Project Structure
The project is organized as follows:

For every new header file and src file that is added, make sure to update the `CMakeLists.txt` file so it can compile.


## Setting Up the Development Environment
1. **Clone the Repository**:
   ```bash
   git clone <repository-url>
   ```

2. **Building and Executing the Program**: Inside the project root directory, create a build directory, execute clang to generate a Makefile, then compile and execute:

    ```bash
    mkdir build
    ```
    ```bash
    cd build
    ```
    ```bash
    clang ..
    ```
    ```bash
    clang --build .
    ```
    ```bash
    ./game
    ```

## Contributing

If you would like to contribute to the project, please follow these guidelines:
    If none 
    - Fork the repository.
    - Create a new branch for your feature or bug fix.
    - Make your changes and commit them.
    - Push your changes to your forked repository.
    - Create a pull request to the main repository.
