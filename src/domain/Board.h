#pragma once

#include <QString>

class Board
{
public:
    Board(QString id, double widthMm, double heightMm, bool reusable = true);

    const QString& id() const;
    double widthMm() const;
    double heightMm() const;
    bool reusable() const;

private:
    QString m_id;
    double m_widthMm;
    double m_heightMm;
    bool m_reusable;
};
