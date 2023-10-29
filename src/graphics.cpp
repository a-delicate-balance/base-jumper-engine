#include "../include/include.hpp"
#include "../include/graphics.hpp"


gfx_window::gfx_window(unsigned short w, unsigned short h, char* title, bool full_screen) : width{w}, height{h}, title{title}, full_screen{full_screen}
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    // createWindow();
}

gfx_window::~gfx_window()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}
