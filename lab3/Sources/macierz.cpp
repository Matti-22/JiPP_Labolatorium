#include <iostream>
#include "Headers\macierz.h"
using namespace std;

Macierz::Macierz(int w, int k)
{
    //Podstawowa obsługa błędów
    if (w <= 0 || k <= 0)
    {
        cout << "Macierz nie moze miec ujemnej lub zerowej ilosci wierszy lub kolumn!!!";
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
        cout << "Macierz nie moze miec ujemnej lub zerowej ilosci wierszy lub kolumn!!!";
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

void Macierz::set(int n, int m, double val)
{
    //Podstawowa obsługa błędów
    if (n < 0 || m < 0 || n > wiersze || m > kolumny)
    {
        cout << "Podane miejsce nie nalezy do mancierzy!!" << endl;
    }
    else
    {
        tablica[n][m] = val;
    }
}

double Macierz::get(int n, int m)
{
    //Podstawowa obsługa błędów
    if (n < 0 || m < 0 || n > wiersze || m > kolumny)
    {
        cout << "Podane miejsce nie nalezy do mancierzy!! Dla metody get(" << n << " " << m << ")" << endl;
        exit(2);
    }
    else
    {
        return tablica[n][m];
    }
}

Macierz Macierz::add(Macierz m2)
{
    if (m2.kolumny != this->kolumny || m2.wiersze != this->wiersze)
    {
        cout << "By dodac dwie macierze musza miec one tyle samo wierszy jak i kolumn!!!" << endl;
        return 0;
    }
    Macierz m3(this->wiersze, this->kolumny);

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            m3.tablica[i][j] = this->tablica[i][j] + m2.tablica[i][j];
        }
    }

    return m3;
}

Macierz Macierz::subtract(Macierz m2)
{
    if (m2.kolumny != this->kolumny || m2.wiersze != this->wiersze)
    {
        cout << "By dodac dwie macierze musza miec one tyle samo wierszy jak i kolumn!!!" << endl;
        return 0;
    }
    Macierz m3(this->wiersze, this->kolumny);

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            m3.tablica[i][j] = this->tablica[i][j] - m2.tablica[i][j];
        }
    }

    return m3;
}

Macierz Macierz::multiply(Macierz m2)
{
    if (this->kolumny != m2.wiersze)
    {
        cout << "Liczba kolumn macierzy A musi byc rowna liczbie wierszy macierzy B!!!" << endl;
        return 0;
    }

    Macierz m3(this->wiersze, m2.kolumny);
    double suma;
    
    for (int i = 0; i < this->wiersze; i++)
    {
        for (int j = 0; j < m2.kolumny; j++)
        {
            suma = 0;
            for (int k = 0; k < m2.wiersze; k++)
            {
                suma += this->tablica[i][k] * m2.tablica[k][j];
            }
            m3.tablica[i][j] = suma;
        }
    }
    return m3;
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