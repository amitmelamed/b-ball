//
// Created by lucas on 02/06/2022.
//
#include "Round.hpp"
#include <vector>
using namespace std;

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


    void Round::printRound() {
        for (size_t i = 0; i < games.size(); ++i) {
            cout<<"Team "<<games[i]->getTeamA()->getName()<<" vs Team "<<games[i]->getTeamB()->getName()<<'\n';
        }
    }

    vector<Game*> Round::getGames() const{
        return this->games;
    }

}