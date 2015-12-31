#include "Player.h"

class Player::Impl {
public:

};

Player::Player() : mImpl(new Impl()) {

}

Player::Player(const Player& other) : mImpl(new Impl()) {

}

Player& Player::operator=(const Player& other) const {
    if (this != &other) {

    }
    return *this;
}

Player::~Player() {}
