//
// Created by lucas on 02/06/2022.
//
#include "League.hpp"
#include "Team.hpp"
#include "Game.hpp"

namespace ball{
    /**
     * Empty constructor:
     * Create 20 random teams.
     */
    League::League() {

    }
    /**
     * Constructor gets vector of teams.
     * if there are 20 Teams put all of them in the league.
     * else create random teams to fill out the missing.
     * in case of more teams, take the first 20.
     * @param teamVec
     */
    League::League(vector<Team*> teamVec){

    }
    vector<Round*> League::getSchedule(){
        return this->schedule;
    }
    vector<Team*> League::getTeams(){
        return this->teams;
    }


}
