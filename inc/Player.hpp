#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Element.hpp"

using namespace std;

class Player{
private:
  int nDiamonds;
  int nPowers;
  int nLives;
  string name;

public:
  static int playerCount;
    // Parameterized Constructor
    Player();
    // Player(int id, int x, int y, string t = "player");
    int Diamonds();
    int Powerups();
    int Lives();

    void incrementDiamonds();
    void incrementPowerups();
    void incrementLives();
    void liveBoost(int boost);
    void decrementPowerups();
    void decrementDiamonds();
    string getName();
    string updateName(string newName);
    void decrementLives();

    ~Player();
};

#endif
