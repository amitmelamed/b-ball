//
// Created by lucas on 02/06/2022.
//
#pragma once

#ifndef B_BALL_ROUND_HPP
#define B_BALL_ROUND_HPP
#include "Game.hpp"
#include <vector>
#include <string.h>
namespace ball{
    class Round{
        std::vector<Game*> games;
    public:
        //-----Constructor-----
        Round();
        Round(std::vector<Game*>);
        //-----Getters-----
        std::vector<Game*> getGames() const;
        //-----Functions-----
        void addGame(Game*);
        void printRound();

    };
}
#endif //B_BALL_ROUND_HPP
