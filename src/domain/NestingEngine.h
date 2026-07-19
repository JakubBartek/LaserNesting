#pragma once

#include "Board.h"

#include <vector>

class NestingEngine
{
public:
    std::vector<Board> planNesting(const std::vector<Board>& availableBoards) const;
};
