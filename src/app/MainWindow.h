#pragma once

#include "../domain/NestingEngine.h"
#include "../storage/BoardRepository.h"

#include <QMainWindow>

class QLabel;

class MainWindow : public QMainWindow
{
public:
    MainWindow();

private:
    NestingEngine m_engine;
    BoardRepository m_boardRepository;
    QLabel* m_statusLabel = nullptr;
};
