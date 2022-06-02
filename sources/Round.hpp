//
// Created by lucas on 02/06/2022.
//

#ifndef B_BALL_ROUND_HPP
#define B_BALL_ROUND_HPP
#include "League.hpp"
namespace ball{
    class Round{
        vector<Game*> games;
    public:
        //-----Constructor-----
        Round();
        Round(vector<Game*>);
        //-----Functions-----
        void addGame(Game*);
        vector<Game*> getGames;

    };
}
#endif //B_BALL_ROUND_HPP
