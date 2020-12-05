cmake_minimum_required( VERSION 3.0 )

# project name
project( lab5 )

# flags

# files

# include
include_directories( ./include/lab5 )

# target
add_executable( lab5 ./src/main.cpp ./src/macierz.cpp ./test/test.cpp)

# external libs