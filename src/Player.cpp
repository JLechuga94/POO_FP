#include "../inc/Player.hpp"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int Player::playerCount = 0;

Player::Player(){
  srand(time(0));
  string defaultPlayers[] = { "Iron Man", "Kenobi", "Goku","Wolverine",
    "Phoenix", "Rogue", "Skywalker"};
  nDiamonds = 0;
  nPowers = 2;
  nLives = 5;
  name = defaultPlayers[rand() % 6];
// cout<<"Player created"<<endl;
}

string Player::getName(){
  return name;
}

string Player::updateName(string newName){
  if (newName != "") {
    name = newName;
  }
  return name;
}

int Player::Diamonds(){
  return nDiamonds;
}

int Player::Powerups(){
  return nPowers;
}

int Player::Lives(){
  return nLives;
}

void Player::incrementDiamonds(){
  nDiamonds++;
}

void Player::incrementPowerups(){
  nPowers++;
}

void Player::incrementLives(){
  nLives++;
}

void Player::liveBoost(int boost){
  nLives+=boost;
}

void Player::decrementDiamonds(){
  nDiamonds--;
}

void Player::decrementPowerups(){
  nPowers--;
}

void Player::decrementLives(){
  nLives--;
}


Player::~Player(){
  // cout<<"Player destroyed"<<endl;
}
