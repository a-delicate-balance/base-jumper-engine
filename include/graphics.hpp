#pragma once

// Graphics libraries
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

class gfx_window
{
    private:
    GLFWwindow* window;
    const unsigned short width;
    const unsigned short height;
    char* title;
    bool full_screen;

    void createWindow();
    
    public:
    gfx_window(unsigned short w, unsigned short h, char* title, bool full_screen);
    ~gfx_window();

};