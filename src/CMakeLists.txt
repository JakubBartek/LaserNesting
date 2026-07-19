find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(LaserNestingApp
    app/main.cpp
    app/MainWindow.cpp
    app/MainWindow.h
    domain/Board.cpp
    domain/Board.h
    domain/NestingEngine.cpp
    domain/NestingEngine.h
    storage/BoardRepository.cpp
    storage/BoardRepository.h
)

target_link_libraries(LaserNestingApp PRIVATE Qt6::Widgets)
