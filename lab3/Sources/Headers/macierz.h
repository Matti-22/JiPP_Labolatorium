#include <iostream>

using namespace std;

class Macierz
{
    int wiersze, kolumny;
    double **tablica;

public:
    //Konstruktor służący do tworzenia macierzy o x wierszach i y kolumnach
    Macierz(int w, int k);
    //Konstruktor służący do tworzenia macierzy kwadratowej
    Macierz(int r);
    //Destruktor
    ~Macierz();

    //Funkcia ma za zadanie wyświetlić macierz na ekranie
    void print();
};