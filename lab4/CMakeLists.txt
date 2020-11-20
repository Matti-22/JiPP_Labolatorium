cmake_minimum_required( VERSION 3.0 )

# project name
project( lab4 )

# flags

# files

# include
include_directories( ./src )

# target
add_executable( binary ./src/main.cpp ./src/macierz.cpp )

# external libs