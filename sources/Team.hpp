//
// Created by lucas on 29/05/2022.
//

#ifndef B_BALL_TEAM_HPP
#define B_BALL_TEAM_HPP
#pragma once
#include <iostream>
#include <string.h>

using namespace std;
namespace ball{
    /**
     * The team class represent a basketball team in our game.
     * each team have unique name.
     * each team have talent rate represent how good are they between 0 to 1.
     */
    class Team{
        string name;
        double talent;
    public:
        //-----Constructors-----
        Team(string name,double talent);
        //-----Getters-----
        string getName();
        double getTalent();
    };
}
#endif //B_BALL_TEAM_HPP