#include <iostream>
#include "Headers\macierz.h"
using namespace std;

Macierz::Macierz(int w, int k)
{
    //Podstawowa obsługa błędów
    if (w <= 0 || k <= 0)
    {
        cout << "Macierz nie moze miec ujemnej ilosci wierszy lub kolumn!!!";
        exit(1);
    }
    wiersze = w;
    kolumny = k;
    //Alokacja pamięci dla nowej macierzy
    tablica = new double *[wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tablica[i] = new double[kolumny];
    }
    //Przypisanie wartości 0 w każde miejsce w macierzy
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            tablica[i][j] = 0;
        }
    }
}

Macierz::Macierz(int r)
{
    //Podstawowa obsługa błędów
    if (r <= 0)
    {
        cout << "Macierz nie moze miec ujemnej ilosci wierszy lub kolumn!!!";
        exit(1);
    }
    wiersze = r;
    kolumny = r;
    //Alokacja pamięci dla nowej macierzy
    tablica = new double *[wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tablica[i] = new double[kolumny];
    }
    //Przypisanie wartości 0 w każde miejsce w macierzy
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            tablica[i][j] = 0;
        }
    }
}

Macierz::~Macierz()
{
    //Zwolnienie pamięci zarezerwowaniej przez macierz
    for (int i = 0; i < wiersze; i++)
    {
        delete[] tablica[i];
    }
    delete[] tablica;
    tablica = NULL;
}

void Macierz::print()
{
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
}