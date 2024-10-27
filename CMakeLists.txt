cmake_minimum_required(VERSION 3.10)
project(geym)

set(CMAKE_CXX_STANDARD 14)

# Find the SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Include directories
include_directories(include)

# List of source files
set(CORE_SRC
    src/core/Game.cpp
)

set(MODELS_SRC
    src/models/Player.cpp
    src/models/Enemy.cpp
)

set(UTILS_SRC
    src/utils/Utils.cpp
)

# Create the executable
add_executable(game
    src/main.cpp
    ${CORE_SRC}
    ${MODELS_SRC}
    ${UTILS_SRC}
)

# Link SFML libraries
target_link_libraries(game sfml-graphics sfml-window sfml-system)

