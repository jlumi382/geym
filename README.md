# Technical Documentation for Ze Geym (Dunno what it's about yet)

## Table of Contents
- [Project Overview](#project-overview)
- [Prerequisites](#prerequisites)
- [Project Structure](#project-structure)
- [Setting Up the Development Environment](#setting-up-the-development-environment)
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
```undefined
geym/
├── build/                  # Directory for build files
│   └── ...                 # Build artifacts generated by CMake
├── include/                # Header files
│   ├── core/               # Core module headers
│   │   └── ...             # Core header files
│   ├── models/             # Model headers
│   │   └── ...             # Model header files
│   └── utils/              # Utility headers
│       └── ...             # Utility header files
├── src/                    # Source files
│   ├── core/               # Core module source files
│   │   └── ...             # Core source files
│   ├── models/             # Model source files
│   │   └── ...             # Model source files
│   └── utils/              # Utility source files
│       └── ...             # Utility source files
├── assets/                 # Game assets (images, sounds, etc.)
│   ├── images/             # Image assets
│   │   └── ...             # Image files
│   ├── sounds/             # Sound assets
│   │   └── ...             # Sound files
│   └── ...                 # Other asset types (if any)
├── CMakeLists.txt          # CMake build configuration file
├── README.md               # Project overview and documentation
└── .gitignore              # Git ignore file
```

### Notable Points:
- **core** - this directory contains the Game loop
- **models** - this contains the different Classes in the game 
- **utils** - this contains functions that can shorten your code

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
We welcome contributions to this project! Please follow these guidelines to help us maintain a collaborative environment.

### If you are a collaborator:
1. **Clone the repository**:
   ```bash
   git clone <repository-url>
2. **Create a new branch**:
    Always create a new branch for your feature or idea:
    ```bash
    git checkout -b your_github_username/your_feature_branch
    ```
3. **Make your changes**:
    Test out your ideas in within this branch.

4. **Push your changes**:
    Push the changes you made to your branch.
    ```bash
    git push origin your_github_username/your_feature_branch
    ``
5. **Submit a pull request**
    If you're satisfied with your new feature, open a pull request against the main branch for review (we can also talk about it in the gc or in person hehe).

### If you are a non-collaborator:
- Fork the repository.
- Create a new branch for your feature or bug fix.
- Make your changes and commit them.
- Push your changes to your forked repository.
- Create a pull request to the main repository.
