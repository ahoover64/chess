#ifndef __BOARD_H__
#define __BOARD_H__

#include <memory>

/*
 * Functions primarily as a wrapper for a 2d array
 */

template <class P>
class Board {
public:
    Board(); // Sets side lenght to 8
    Board(int size_len);
    Board(const Board &other);
    Board& operator=(const Board &other) const;
    ~Board();
    P get_space(int row, int col);
    int get_side_len();

private:
    class Impl;
    std::shared_ptr<Impl> mImpl;
};

#endif // __BOARD_H__
