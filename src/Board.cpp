#include "Board.h"

class Board::Impl {
public:

};

Board::Board() : mImpl(new Impl()) {

}

Board::Board(int side_len) : mImpl(new Impl()) {

}

Board::Board(const Board& o) : mImpl(new Impl()) {

}

Board& Board::operator=(const Board& other) const {
    if (this != &other) {

    }
    return *this;
}

Board::~Board() {}

P Board::get_space(int r, int col) {

}

int Board::get_side_len() {

}
