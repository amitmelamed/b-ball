//
// Created by lucas on 02/06/2022.
//
#include "Round.hpp"
namespace ball{
    /**
     * Empty constructor
     */
    Round::Round() {

    }
    Round::Round(vector<Game*> newGames) {
        for (size_t i = 0; i < newGames.size(); ++i) {
            this->games.push_back(newGames[i]);
        }
    }
    void Round::addGame(Game* game){
        this->games.push_back(game);
    }
}