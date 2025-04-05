cmake_minimum_required(VERSION 3.29.6)
project(Pig_Dice_5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_5 Pig_Dice_5_Core.cpp
        main.cpp
        Turn.cpp
        Turn.h
        Game.cpp
        Game.h
        Die.cpp
        Die.h
        twoPGame.h
        twoPGame.cpp)
