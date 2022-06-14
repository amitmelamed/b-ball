//
// Created by lucas on 02/06/2022.
//
/**
 * Implementation of the Game class
 */
#include <iostream>
#include <random>
#include "Game.hpp"

using namespace std;
int random(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) ); //seeding for the first time only!
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}
const int home_team_lowest_rnd_scr=55;
const int out_team_lowest_rnd_scr=50;
const int highest_rnd=100;
const int ten=10;

namespace ball{
    /**
     * Constructor for the Game.
     * get 2 Team pointers and generate random score.
     *Then add point to each Team base on their talent to
     * @param A
     * @param B
     */
    Game::Game(Team* A, Team* B) {
        this->A=A;
        this->B=B;
        scoreA= random(home_team_lowest_rnd_scr,highest_rnd);
        scoreB= random(out_team_lowest_rnd_scr,highest_rnd);
        scoreA=scoreA+(int)A->getTalent()*ten;
        scoreB=scoreB+(int)B->getTalent()*ten;
    }

    /**
     * Getters
     * @return
     */
    Team* Game::getTeamA() const {
        return A;
    }

    Team *Game::getTeamB() const {
        return B;
    }

    int Game::getTeamAScore() const {
        return scoreA;
    }

    int Game::getTeamBScore() const {
        return scoreB;
    }

    /**
     * Returning the winner of the game.
     * The winner is the team with the most points.
     * In case of draw-The guest Team will win (Team B).
     * @return
     */
    Team *Game::getWinner() const {
        if(scoreA>scoreB){
            return A;
        }
        return B;
    }
}
