CFLAGS=-std=c++17 -O2
LDFLAGS=-lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: src/graphics.cpp
	g++ $(CFLAGS) -o VulkanTest src/*.cpp $(LDFLAGS) -I/include

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest