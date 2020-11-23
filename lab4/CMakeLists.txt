cmake_minimum_required( VERSION 3.0 )

# project name
project( lab4 )

# flags

# files

# include
include_directories( ./include/lab4 )

# target
add_executable( lab4 ./src/main.cpp ./src/macierz.cpp )

# external libs