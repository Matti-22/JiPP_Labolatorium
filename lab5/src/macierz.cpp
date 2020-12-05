#include <iostream>
#include <fstream>
#include <sstream>
#include "macierz.h"
using namespace std;

Macierz::Macierz(int w, int k)
{
    //Obsługa błędów
    if (w <= 0)
    {
        stringstream errorMsg;
        errorMsg << "Macierz nie moze miec ujemnej lub zerowej ilosci wierszy" << endl;
        errorMsg << "w: " << w << endl;
        throw invalid_argument(errorMsg.str());
    }
    if (k <= 0)
    {
        stringstream errorMsg;
        errorMsg << "Macierz nie moze miec ujemnej lub zerowej ilosci kolumn" << endl;
        errorMsg << "k: " << k << endl;
        throw invalid_argument(errorMsg.str());
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
    //Obsługa błędów
    if (r <= 0)
    {
        stringstream errorMsg;
        errorMsg << "Macierz nie moze miec ujemnej lub zerowej ilosci wierszy lub kolumn" << endl;
        errorMsg << "r: " << r << endl;
        throw invalid_argument(errorMsg.str());
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

}

void Macierz::set(int n, int m, double val)
{
    //Obsługa błędów
    if (n < 0 || m < 0 || n > wiersze || m > kolumny)
    {
        stringstream errorMsg;
        errorMsg << "Podany adres jest poza obszarem macierzy [" << this->wiersze << "," << this->kolumny << "]" << endl;
        errorMsg << "Punkt (" << n << "," << m << ")" << endl;
        throw invalid_argument(errorMsg.str());
    }
    else
    {
        tablica[n][m] = val;
    }
}

double Macierz::get(int n, int m)
{
    //Obsługa błędów
    if (n < 0 || m < 0 || n > wiersze || m > kolumny)
    {
        stringstream errorMsg;
        errorMsg << "Podany adres jest poza obszarem macierzy [" << this->wiersze << "," << this->kolumny << "]" << endl;
        errorMsg << "Punkt (" << n << "," << m << ")" << endl;
        throw invalid_argument(errorMsg.str());
    }
    else
    {
        return tablica[n][m];
    }
}

Macierz Macierz::add(Macierz m2)
{
    //Obsługa błędów
    if (m2.kolumny != this->kolumny || m2.wiersze != this->wiersze)
    {
        stringstream errorMsg;
        errorMsg << "Nie da sie dodac macierzy o roznych rozmiarach" << endl;
        errorMsg << "[" << m2.wiersze << "," << m2.kolumny << "] != [" << this->wiersze << "," << this->kolumny << "]" << endl;
        throw invalid_argument(errorMsg.str());
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
    //Obsługa błędów
    if (m2.kolumny != this->kolumny || m2.wiersze != this->wiersze)
    {
        stringstream errorMsg;
        errorMsg << "Nie da sie odjac macierzy o roznych rozmiarach" << endl;
        errorMsg << "[" << m2.wiersze << "," << m2.kolumny << "] != [" << this->wiersze << "," << this->kolumny << "]" << endl;
        throw invalid_argument(errorMsg.str());
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
    //Obsługa błędów
    if (this->kolumny != m2.wiersze)
    {
        stringstream errorMsg;
        errorMsg << "Liczba kolumn macierzy A musi byc rowna liczbie wierszy macierzy B" << endl;
        errorMsg << "A[" << this->wiersze << "," << this->kolumny << "] B[" << m2.wiersze << "," << m2.kolumny << "]" << endl;
        throw invalid_argument(errorMsg.str());
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

int Macierz::cols()
{
    return this->kolumny;
}

int Macierz::rows()
{
    return this->wiersze;
}

void Macierz::print()
{
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << tablica[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void Macierz::store(string filename, string path)
{

    string full_path = path + '/' + filename;
    fstream plik;

    plik.open(full_path, ios::out);
    if (plik.is_open())
    {
        plik << wiersze << " " << kolumny << endl;
        for (int i = 0; i < wiersze; i++)
        {
            for (int j = 0; j < kolumny; j++)
            {
                plik << tablica[i][j] << "  ";
            }
            plik << endl;
        }
        plik.close();
    }
    else
    {
        stringstream errorMsg;
        errorMsg << "Blad otwarcia pliku!" << endl;
        errorMsg << "Sprawdz czy podana sciezka: " << full_path << " jest poprawna" << endl;
        throw invalid_argument(errorMsg.str());
    }
}

Macierz::Macierz(string path)
{
    fstream plik;
    plik.open(path);
    if (plik.is_open())
    {
        plik >> this->wiersze;
        plik >> this->kolumny;

        //Alokacja pamięci dla nowej macierzy
        tablica = new double *[wiersze];
        for (int i = 0; i < wiersze; i++)
        {
            tablica[i] = new double[kolumny];
        }

        for (int i = 0; i < wiersze; i++)
        {
            for (int j = 0; j < kolumny; j++)
            {
                plik >> tablica[i][j];
            }
        }
        plik.close();
    }
    else
    {
        stringstream errorMsg;
        errorMsg << "Blad otwarcia pliku!" << endl;
        errorMsg << "Sprawdz czy podana sciezka: " << path << " jest poprawna" << endl;
        throw invalid_argument(errorMsg.str());
    }
}