//
// Created by lucas on 02/06/2022.
//
/**
 * Implementation of the Game class
 */
#include <iostream>
#include <random>
#include "Game.hpp"


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
namespace ball{
    /**
     * Constructor for the Game.
     * get 2 Team pointers and generate random score.
     *
     * @param A
     * @param B
     */
    Game::Game(Team* A, Team* B) {
        this->A=A;
        this->B=B;

        scoreA= random(55,100);
        scoreB= random(50,100);
        scoreA=scoreA+(int)A->getTalent()*10;
        scoreB=scoreB+(int)B->getTalent()*10;




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

    Team *Game::getWinner() const {
        if(scoreA>scoreB){
            return A;
        }
        return B;
    }

}
