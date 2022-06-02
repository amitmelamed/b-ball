//
// Created by lucas on 29/05/2022.
//

#ifndef B_BALL_LEAUGE_HPP
#define B_BALL_LEAUGE_HPP
#include "Game.hpp"
#include <vector>
#include <string.h>
#include "Round.hpp"
#include "Team.hpp"

using namespace std;
/**
 * The league class represent a league of 20 teams.
 */
 namespace ball{
     class Round;
     class League{
         vector<Team*> teams;
         vector<Round*> schedule;
     public:
         //-----Constructors-----
         League();
         League(vector<Team*> teams);
         //-----Getters-----
         vector<Team*> getTeams();
         vector<Round*> getSchedule();
     };
 }
#endif //B_BALL_LEAUGE_HPP
