#include "BoardRepository.h"

std::vector<Board> BoardRepository::loadReusableBoards() const
{
    return m_cachedBoards;
}

void BoardRepository::saveReusableBoard(const Board& board)
{
    if (!board.reusable())
    {
        return;
    }

    m_cachedBoards.push_back(board);
}
