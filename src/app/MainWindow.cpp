#include "MainWindow.h"

#include <QLabel>

MainWindow::MainWindow()
    : m_statusLabel(new QLabel(this))
{
    setWindowTitle("LaserNesting");

    const auto loadedBoards = m_boardRepository.loadReusableBoards();
    const auto message = QString("Laser nesting project scaffold ready. Reusable boards loaded: %1")
                             .arg(static_cast<int>(loadedBoards.size()));

    m_statusLabel->setText(message);
    m_statusLabel->setAlignment(Qt::AlignCenter);
    setCentralWidget(m_statusLabel);

    resize(800, 600);
}
