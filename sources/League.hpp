//
// Created by lucas on 29/05/2022.
//
#pragma once
#ifndef B_BALL_LEAUGE_HPP
#define B_BALL_LEAUGE_HPP
#include <vector>
#include <string.h>

#include "Schedule.hpp"

/**
 * The league class represent a league of 20 teams.
 */
 namespace ball{
     class League{
         std::vector<Team*> teams;
         Schedule schedule;
     public:
         //-----Constructors-----
         League();
         League(std::vector<Team*>);
         ~League();
         //-----Getters-----
         std::vector<Team*> getTeams() const;
         Schedule getSchedule() const;
         //-----Functions-----
         void print();
     };
 }
#endif //B_BALL_LEAUGE_HPP
