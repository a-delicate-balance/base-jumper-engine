#!/bin/sh

cmake -S ./ -B ./build
cd ./build
make
./g_engine
cd ..