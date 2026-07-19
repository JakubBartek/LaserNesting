#include "Board.h"

#include <utility>

Board::Board(QString id, double widthMm, double heightMm, bool reusable)
    : m_id(std::move(id))
    , m_widthMm(widthMm)
    , m_heightMm(heightMm)
    , m_reusable(reusable)
{
}

const QString& Board::id() const
{
    return m_id;
}

double Board::widthMm() const
{
    return m_widthMm;
}

double Board::heightMm() const
{
    return m_heightMm;
}

bool Board::reusable() const
{
    return m_reusable;
}
