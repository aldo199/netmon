cmake_minimum_required(VERSION 3.15)
project(netmon VERSION 0.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Load Conan's toolchain if it exists
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake OPTIONAL)

# Include headers
include_directories(include)

# ------------------------------
# Main application target
# ------------------------------
add_executable(netmon
    src/main.cpp
    src/netmon.cpp
)

# Find and link spdlog
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(netmon PRIVATE spdlog::spdlog)

# ------------------------------
# Test target (GoogleTest)
# ------------------------------
enable_testing()

add_executable(test_netmon
    tests/test_netmon.cpp
)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(test_netmon PRIVATE GTest::gtest_main spdlog::spdlog)

include(GoogleTest)
gtest_discover_tests(test_netmon)

