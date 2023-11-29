#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <string>
#include <set>

struct Player{
    std::string name;
    int score; 

    Player(std::string n, int s);

    bool compare(const Player& other);
};


class Leaderboard{

public:

    void addPlayer(const std::string& name, int string);

    void removePlayer(const std::string& );
    
    void updateScore(const std::string&, int);

    void printTopPlayers(int);

private: 
    std::set<Player> players;
};

#endif