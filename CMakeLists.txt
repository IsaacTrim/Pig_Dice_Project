cmake_minimum_required(VERSION 3.30)
project(Pig_Dice_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_4 Pig_Dice_4_Core.cpp
        main.cpp
        Turn.cpp
        Turn.h
        cmake-build-debug/Game.cpp
        cmake-build-debug/Game.h
        Die.cpp
        Die.h)
