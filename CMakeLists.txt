project(base-jumper-engine)

add_executable(base-jumper-engine src/main.cpp)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)

target_link_libraries(base-jumper-engine glfw)

find_package(OpenGL REQUIRED)

target_link_libraries(base-jumper-engine OpenGL::GL)



