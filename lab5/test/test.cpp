#include <iostream>
#include "macierz.h"

using namespace std;

void testErrors()
{
    cout << "------- Sprawdzanie bledow -------" << endl
         << endl;
    try
    {
        cout << "Tworzenie macierzy o rozmiarze 4 x (-1)" << endl;
        Macierz m1(4, -1);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 0 x 0" << endl;
        Macierz m1(0);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 3 x 3 " << endl;
        cout << "Dodawanie elementu do tablicy (5,3)" << endl;
        Macierz m1(3);
        m1.set(5, 3, 15);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 3 x 3 " << endl;
        cout << "Dodawanie elementu do tablicy (-2,3)" << endl;
        Macierz m1(3);
        m1.get(-2, 3);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 3 x 3 " << endl;
        cout << "Tworzenie macierzy o rozmiarze 4 x 3 " << endl;
        cout << "Dodanie tych dwoch macierzy" << endl;
        Macierz m1(3);
        Macierz m2(4, 3);
        m1.add(m2);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 5 x 5 " << endl;
        cout << "Tworzenie macierzy o rozmiarze 2 x 3 " << endl;
        cout << "Odjecie m2 od m1" << endl;
        Macierz m1(5);
        Macierz m2(2, 3);
        m1.subtract(m2);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 3 x 4 " << endl;
        cout << "Tworzenie macierzy o rozmiarze 5 x 2 " << endl;
        cout << "m1 x m2" << endl;
        Macierz m1(3, 4);
        Macierz m2(5, 2);
        m1.multiply(m2);
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 3 x 4 " << endl;
        cout << "Zapisanie macierzy do pliku m1.txt w folderze To_sie_nie_uda" << endl;
        Macierz m1(3, 4);
        m1.store("m1.txt", "../To_sie_nie_uda");
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        cout << "Tworzenie macierzy o rozmiarze 4 x 5 z danych z pliku m3.txt z folderu To_sie_nie_uda" << endl;
        Macierz m3("../To_sie_nie_uda/m3.txt");
    }
    catch (logic_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "------- Sprawdzanie bledow ZAKONCZONE-------" << endl
         << endl;
}

void test()
{
    Macierz m1(4, 5);
    int kol = m1.cols();
    int wier = m1.rows();

    double pom = -15;
    //Zapełniamy macierz wartościami
    for (int i = 0; i < wier; i++)
    {
        for (int j = 0; j < kol; j++)
        {
            m1.set(i, j, pom);
            pom += 0.5;
        }
    }

    cout << "Macierz m1:" << endl;
    m1.print();

    Macierz m2(5);
    kol = m2.cols();
    wier = m2.rows();
    //Zapełniamy macierz wartościami
    for (int i = 0; i < wier; i++)
    {
        for (int j = 0; j < kol; j++)
        {
            m2.set(i, j, pom);
            pom += 0.5;
        }
    }
    cout << "Macierz m2:" << endl;
    m2.print();

    Macierz m3 = m1.multiply(m2);
    cout << "Macierz m1 * m2 = m3:" << endl;
    m3.print();

    Macierz m4 = m3.add(m1);
    cout << "Macierz m3 + m1 = m4:" << endl;
    m4.print();

    Macierz m5 = m3.subtract(m1);
    cout << "Macierz m3 - m1 = m5:" << endl;
    m5.print();

    m5.store("m5.txt", "../src/pliki");

    Macierz m6("../src/pliki/m5.txt");
    cout << "Macierz m6 wczytana z pliku m5.txt:" << endl;
    m6.print();
}