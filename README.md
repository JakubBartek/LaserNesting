# LaserNesting

Initial project scaffold for a C++/Qt laser nesting application.

## Current structure

- `CMakeLists.txt` - root CMake configuration
- `src/app` - Qt application entry point and main window
- `src/domain` - core domain models and nesting engine placeholder
- `src/storage` - reusable-board repository placeholder for future persistence

## Build (Qt 6)

```bash
cmake -S /home/runner/work/LaserNesting/LaserNesting -B /home/runner/work/LaserNesting/LaserNesting/build
cmake --build /home/runner/work/LaserNesting/LaserNesting/build
```
