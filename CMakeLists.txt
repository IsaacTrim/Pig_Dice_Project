cmake_minimum_required(VERSION 3.29.6)
project(Pig_Dice_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_4 Pig_Dice_4_Core.cpp
        main.cpp
        Turn.cpp
        Turn.h
        Game.cpp
        Game.h
        Die.cpp
        Die.h
        Player.cpp
        2PGame.cpp
        2PGame.h)
