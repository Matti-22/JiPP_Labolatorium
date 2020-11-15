#include <iostream>
#include "Headers\macierz.h"
using namespace std;

int main()
{
    Macierz m1(3);
    Macierz m2(3);

    double pom;
    for (int i = 0; i < m1.wiersze; i++)
    {
        for (int j = 0; j < m1.kolumny; j++)
        {
            cin >> pom;
            m1.set(i, j, pom);
        }
    }

    cout << "KOLEJNA" << endl;

    for (int i = 0; i < m2.wiersze; i++)
    {
        for (int j = 0; j < m2.kolumny; j++)
        {
            cin >> pom;
            m2.set(i, j, pom);
        }
    }

    Macierz m3 = m1.multiply(m2);

    int k = m1.cols();
    cout << endl
         << "liczba kolumn: " << k << endl;
    /*
    m1.set(1, 2, 13);
    double pom = m1.get(-1, 2);
    cout << "pom = " << pom << endl;
    */

    m3.print();
    return 0;
}