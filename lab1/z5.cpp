#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    double m1[2][3], m2[2][3], m3[2][3];
    //Dodawanie elementów do macierzy 1
    cout << "Podaj elementy macierzy 1 o wymiarach 2x3" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
    }
    //Dodawanie elementów do macierzy 2
    cout << "Podaj elementy macierzy 2 o wymiarach 2x3" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m2[i][j];
        }
    }
    //Dodawanie macierzy m1 i m2 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    //Wypisywanie macierzy na pulpit
    cout << "Wynik po dodaniu macierzy 1 do macierzy 2:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << "\n";
    }
}
