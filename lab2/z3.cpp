#include <iostream>

using namespace std;

void zamiana(int &ra, int *wb)
{
    int pom = ra;
    ra = *wb;
    wb = &pom;
}

int main()
{
    int a, b;
    int *w1 = NULL;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;

    w1 = &b;
    cout << "Liczby przed zamieniniem a = " << a << " b = " << b << endl;
    zamiana(a, w1);
    cout << "Liczby po zamieniniem a = " << a << " b = " << b << endl;
}