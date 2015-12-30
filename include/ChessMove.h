#ifndef __CHESSMOVE_H__
#define __CHESSMOVE_H__

#include <memory>

class ChessMove {
public:
    ChessMove(const ChessMove& other);
    ChessMove& operator=(const ChessMove& other);
    ~ChessMove();

private:
    ChessMove();
    class Impl;
    std::shared_ptr<Impl> mImpl;
};

#endif // __CHESSMOVE_H__
