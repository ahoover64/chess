#include "ChessMove.h"

class ChessMove::Impl {
public:

};

ChessMove::ChessMove() : mImpl(new Impl()) {}

ChessMove::ChessMove(const ChessMove& other) : mImpl(new Impl()) {

}
ChessMove& ChessMove::operator=(const ChessMove& other) const {
    if (this != &other) {

    }
    return *this;
}
