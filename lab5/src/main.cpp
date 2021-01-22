#include <iostream>
#include "../include/lab5/macierz.h"
#include "../libs/sqlite3/sqlite3.h"
using namespace std;

//Funkcjia sprawdza obsługę wszystkich błędów 
void testErrors();

//Funkcjia sprawdza działanie wszystkich metod i konstruktorów
void test(sqlite3 *db);

sqlite3* connect();

void clearTable(sqlite3 *db);

int main()
{
    sqlite3* db = connect();
    clearTable(db);
    //testErrors();
    test(db);
    return 0;
}
