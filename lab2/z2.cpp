#include <iostream>

using namespace std;

//Funkcja zamienia ze sobą dwie liczby urzywając referencji
void zamiana(int &ra, int &rb)
{
    int pom = ra;
    ra = rb;
    rb = pom;
}

int main()
{
    int a, b;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;

    cout << "Liczby przed zamieniniem a = " << a << " b = " << b << endl;
    zamiana(a, b);
    cout << "Liczby po zamieniniu a = " << a << " b = " << b << endl;
}