#include <iostream>
#include "Headers\macierz.h"
using namespace std;

int main()
{
    //Tworzenie nowych macierzy i pobarnie liczby ich kolumn i wierszy
    Macierz m1(3);
    int k1 = m1.cols();
    int w1 = m1.rows();
    Macierz m2(3);
    int k2 = m2.cols();
    int w2 = m2.rows();

    double pom;

    cout << "Prosze podac wartosci pierwszej macierzy:" << endl;
    for (int i = 0; i < w1; i++)
    {
        for (int j = 0; j < k1; j++)
        {
            cin >> pom;
            m1.set(i, j, pom);
        }
    }

    cout << "Prosze podac wartosci drugiej macierzy:" << endl;
    for (int i = 0; i < w2; i++)
    {
        for (int j = 0; j < k2; j++)
        {
            cin >> pom;
            m2.set(i, j, pom);
        }
    }

    Macierz m3 = m1.multiply(m2);

    cout << endl
         << "liczba wierszy m1: " << w1 << endl;
    /*
    m1.set(1, 2, 13);
    double pom = m1.get(-1, 2);
    cout << "pom = " << pom << endl;
    */

    m3.print();
    return 0;
}