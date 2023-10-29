#include "../include/include.hpp"
#include "../include/graphics.hpp"

class engine
{
    public:
    const unsigned short width = 800;
    const unsigned short height = 600;
    char* title = "hello";
    bool full_screen;

    void run(){};

    private:
    gfx_window window = gfx_window(width, height, title, full_screen);

};


int main()
{
    engine engine{};
    try{engine.run();}
    catch(const std::exception &e){}
    std::cout << "Hello\n";
    return 0;
}