#include "leaderboard.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(const std::string n, int s):name(n), score(s){};

Leaderboard::addPlayer(const std::string &name , int score)
{
    players.insert({name,score});
}
