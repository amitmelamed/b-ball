//
// Created by lucas on 14/06/2022.
//
#pragma once

#ifndef B_BALL_SCHEDULE_HPP
#define B_BALL_SCHEDULE_HPP
#include <vector>
#include <string.h>
#include "Round.hpp"

namespace ball{
    class Round;
    class Schedule{
        std::vector<Round*> rounds;
    public:
        //-----Constructors-----
        Schedule();
        Schedule(const std::vector<Team*>&);
        ~Schedule();
        //-----Getters-----

        //-----Functions-----
        void print();
    };
}
#endif //B_BALL_SCHEDULE_HPP
