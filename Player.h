#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;

    static int num_players;

public:
    // Constructors
    Player(std::string name_val = "Player", int health_val = 0, int xp_val = 0);
    Player(const Player &source);

    // Destructor
    ~Player();

    // Static accessor
    static int get_num_players();
};

#endif // PLAYER_H
