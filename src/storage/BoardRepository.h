#pragma once

#include "../domain/Board.h"

#include <vector>

class BoardRepository
{
public:
    std::vector<Board> loadReusableBoards() const;
    void saveReusableBoard(const Board& board);

private:
    std::vector<Board> m_cachedBoards;
};
