//
// Created by lucas on 02/06/2022.
//
#pragma once

#ifndef B_BALL_GAME_HPP
#define B_BALL_GAME_HPP
#include "Team.hpp"
/**
 * The Game class represent a basketball game between two teams in our league.
 * When the game is created we will generate a random score between 50-100.
 * The score distribution:
 * 1.Basic score 50-100.
 * 2.Basic score for Home team 55-100.
 * 3.After basic score is given we will increase each team score by her skill level.
 */
namespace ball{
    class Game{
        Team* A;
        Team* B;
        int scoreA;
        int scoreB;
    public:
        //-----Constructors-----
        Game(Team*,Team*);
        //-----Getters-----
        Team* getTeamA() const;
        Team* getTeamB() const;
        int getTeamAScore() const;
        int getTeamBScore() const;
        Team* getWinner() const;
    };
}
#endif //B_BALL_GAME_HPP
