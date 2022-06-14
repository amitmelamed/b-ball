//
// Created by lucas on 02/06/2022.
//
#include "League.hpp"
#include "Team.hpp"
#include "Game.hpp"
#include <string>

using namespace std;

const int opt_team_size=20;
const int ninety_nine=99;
const int one_hundred=100;
const int one=1;
int randomNumber(int min, int max) //range : [min, max]
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
     * Empty constructor:
     * Create 20 random teams.
     */
    League::League() {
        for (size_t i =0 ; i < opt_team_size; ++i) {
            //r is a Number between 0 and 1
            double r=(double )(randomNumber(one,ninety_nine))/one_hundred;
            Team* randomTeam=new Team("Random Team #"+to_string(i+1),r);
            teams.push_back(randomTeam);
        }
    }
    /**
     * Constructor gets vector of teams.
     * if there are 20 Teams put all of them in the league.
     * else create random teams to fill out the missing.
     * in case of more teams, take the first 20.
     * @param teamVec
     */
    League::League(vector<Team*> teamVec){
        //1.1 Constructor get less than 20 teams-create random teams to fill Vector up
        if(teamVec.size()<opt_team_size){
            size_t teamFirstSize=teamVec.size();
            for (size_t i = teamVec.size(); i < opt_team_size; ++i) {
                //r is a Number between 0 and 1
                double r=(double )(randomNumber(1,ninety_nine))/one_hundred;
                Team* randomTeam=new Team("Random Team #"+to_string(i-teamFirstSize+1),r);
                teamVec.push_back(randomTeam);
            }
        }
        //1.2After we have 20 teams or more, we will push back the 20 first teams from teamVec into our league
        for (size_t i = 0; i <opt_team_size ; ++i) {
            teams.push_back(teamVec[i]);
        }
        //2.Create games schedule for our league.

    }
    /**
     *
     * @return
     */
     League::~League(){
        for (size_t i = 0; i < teams.size(); ++i) {
            delete teams[i];
        }

     }
    Schedule League::getSchedule() const{
        return this->schedule;
    }
    vector<Team*> League::getTeams() const{
        return this->teams;
    }
    void League::print(){

        for (size_t i = 0; i < teams.size(); ++i) {
            cout<<teams[i]->getName()<<" "<<teams[i]->getTalent()<<'\n';
        }
    }



}
