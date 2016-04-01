#ifndef __CHESS_H__
#define __CHESS_H__

#include <memory>

class Chess {
public:
    Chess();
    Chess(const Chess& other);
    Chess& operator=(const Chess& other);
    ~Chess();
    void play_game();
    bool valid_move(ChessMove m);
    bool make_move(ChessMove m);
    Player get_winner();
    static void save_game(Chess g, char filename[]);

private:
    class Impl;
    std::shared_ptr<Impl> mImpl;
};

#endif // __CHESS_H__
