#include <iostream>

using namespace std;

class Macierz
{
    int wiersze, kolumny;
    double **tablica;

public:
    Macierz(int = 1, int = 1);
    ~Macierz();


//Funkcia ma za zadanie wyświetlić macierz na ekranie 
    void print();
};