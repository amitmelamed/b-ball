//
// Created by lucas on 02/06/2022.
//
/**
* This file contains the implementation for the Team class.
*/
#include "Team.hpp"
namespace ball{
    /**
     * Constructor
     * @param name
     * @param talent
     */
    Team::Team(string name, double talent) {
        if(talent<0||talent>1){
            throw std::invalid_argument("Tallent must be from Double from 0 to 1");
        }
        this->name=name;
        this->talent=talent;
    }

    /**
     * Getters
     * @return
     */
    double Team::getTalent() {
        return talent;
    }

    string Team::getName() {
        return name;
    }
}