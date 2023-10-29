cmake_minimum_required(VERSION 3.20)
project(base-jumper-engine)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++17 -O2")

include_directories(include/)
add_executable(${PROJECT_NAME} src/engine.cpp src/graphics.cpp include/include.hpp include/graphics.hpp)
target_link_libraries(${PROJECT_NAME} glfw)
find_package(Vulkan REQUIRED)
target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES})
find_package(X11)
target_link_libraries(${PROJECT_NAME} ${X11_LIBRARIES})