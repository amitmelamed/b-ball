//
// Created by lucas on 02/06/2022.
//

#include "League.hpp"

using namespace ball;
int main() {
    Team hapoel("hapoel",0.8);
    Team macabi("macabi",0.99);
    Game game(&hapoel,&macabi);
    cout<<"team A"<<game.getTeamA()->getName()<<" score: "<<game.getTeamAScore()<<"\nTeam b: "<<game.getTeamB()->getName()<< " score: "<<game.getTeamBScore();
}