#include <iostream>
#include "macierz.h"
using namespace std;
/*
//Funkcjia sprawdza działanie wszystkich metod i konstruktorów
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

    Macierz m4 =m3.add(m1);
    cout << "Macierz m3 + m1 = m4:" << endl;
    m4.print();

    Macierz m5 = m3.subtract(m1);
    cout << "Macierz m3 - m1 = m5:" << endl;
    m5.print();

    m5.store("m5.txt","pliki");

    Macierz m6("pliki/m5.txt");
    cout << "Macierz m6 wczytana z pliku m5.txt:" << endl;
    m6.print();
}
*/

void test_operator()
{
    Macierz m1(5);
    int kol = m1.cols();
    int wier = m1.rows();

    double pom = 1;
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

    Macierz m3 = m1 + m2;
    cout << "Macierz m1 + m2 = m3:" << endl;
    m3.print();

    m3 = m1 - m2;
    cout << "Macierz m1 - m2 = m3:" << endl;
    m3.print();

    Macierz m4(5);
    kol = m4.cols();
    wier = m4.rows();
    //Zapełniamy macierz wartościami
    for (int i = 0; i < wier; i++)
    {
        for (int j = 0; j < kol; j++)
        {
            m4.set(i, j, -1);
        }
    }

    cout << "Macierz m4:" << endl;
    m4.print();

    bool test;
    test = m3 == m4;
    cout << "Czy macierz m3 == m4? odp. ";
    if (test == true)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }

    cout << endl << endl;

    m3 = m1 * m2;
    cout << "Macierz m1 * m2 = m3:" << endl;
    m3.print();

    cout << "m7[0]: ";
    double *m3row = m3[0];
    for (int i = 0; i < m3.cols(); i++)
        cout << m3row[i] << " ";
}
int main()
{
    //test();
    test_operator();
    return 0;
}
