cmake_minimum_required( VERSION 3.0 )

# project name
project( lab5 )

# flags

# files

# include
include_directories( src test include libs )

# target
add_executable( lab5 src/main.cpp src/macierz.cpp test/test.cpp libs/sqlite3/sqlite3.c)

# external libs