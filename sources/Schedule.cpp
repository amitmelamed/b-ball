//
// Created by lucas on 14/06/2022.
//
#include "Schedule.hpp"

using namespace std;
const int twenty=20;
const int two=2;
const int ten=10;
const int nine=9;
const int nine_teen=19;
const int one=1;
namespace ball{
    Schedule::Schedule() {

    }
    Schedule::Schedule(const vector<Team*> &teams) {
        if(teams.size()!=twenty){
            throw runtime_error("A Schedule must be with 20 teams");
        }
        vector<vector<Team*>> table(two,vector<Team*>(ten));

        //initialize teams into 2*10 matrix
        for (size_t i = 0; i < two; ++i) {
            for (size_t j = 0; j < ten; ++j) {
                table[i][j]=teams[i*ten+j];
            }
        }

        //move the circle 19 times and make 19 rounds
        for (size_t i = 0; i < nine_teen; ++i) {
            //First add current round to schedule
            Round* round=new Round();
            for (size_t j = 0; j < ten; ++j) {
                round->addGame(new Game(table[0][j],table[one][j]));
            }
            rounds.push_back(round);

            //Then circle
            Team* eleven=table[1][0];
            for (size_t j = 0; j < nine; ++j) {
                table[1][j]=table[1][j+1];
            }
            table[1][nine]=table[0][nine];
            for (size_t j = nine; j >0; --j) {
                table[0][j]=table[0][j-1];
            }
            table[0][1]=eleven;
        }

    }
    Schedule::~Schedule() {
        for (size_t i = 0; i < rounds.size(); ++i) {
            for (size_t j = 0; j < rounds[i]->getGames().size(); ++j) {
                delete rounds[i]->getGames()[j];
            }
            delete rounds[i];
        }
    }

    void Schedule::print() {
        for (size_t i = 0; i < rounds.size(); ++i) {
            cout<<"Round number: "<<i+1<<'\n';
            this->rounds[i]->printRound();
            cout<<"\n \n";
        }
    }

}
