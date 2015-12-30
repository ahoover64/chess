#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <memory>

class ChessPlayer {
public:
    Player();
    Player(const Player&);
    Player& operator=(const Player&);
    ~Player();
    ChessMove get_move() = 0;

private:
    class Impl;
    std::shared_ptr<Impl> mImpl;
};

#endif // __PLAYER_H__
