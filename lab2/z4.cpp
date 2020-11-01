#include <iostream>

using namespace std;

//Funkcja zwraca dwie wartości, iloczyn oraz przy użyciu referencji sumę dwóch liczb 
int fun(int zmA, int zmB, int &suma)
{
    int iloczyn = zmA * zmB;
    suma = zmA + zmB;
    return iloczyn;
}

int main()
{
    int a, b, iloczyn, suma;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;

    iloczyn = fun(a, b, suma);

    cout << a << " + " << b << " = " << suma << endl;
    cout << a << " * " << b << " = " << iloczyn << endl;
}