//
// Created by lucas on 02/06/2022.
//

#include "League.hpp"

using namespace ball;
using namespace std;

int main() {
    Team hapoel("hapoel",0.8);
    Team macabi("macabi",0.99);
    vector<Team*> vec;
    League league(vec);
    Schedule schedule(league.getTeams());
    schedule.print();

}