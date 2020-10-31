#include <iostream>
using namespace std;

//Funkcja obliczająca sumę dzielników podanej liczby
int sum_dziel(int a)
{
    int suma = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            suma += i;
        }
    }
    return suma;
}

int main(int argc, char *argv[])
{
    // Podanie wartości liczb a i b
    int a, b;
    cout << "Podaj liczbe 1:" << endl;
    cin >> a;
    cout << "Podaj liczbe 2:" << endl;
    cin >> b;

    //Sprawdzenie czy liczby a i b są skojarzonymi
    if (sum_dziel(a) == b + 1 && sum_dziel(b) == a + 1)
    {
        cout << "Liczby " << a << " oraz " << b << " sa skojarzone.";
    }
    else
    {
        cout << "Liczby " << a << " oraz " << b << " NIE sa skojarzone";
    }

    return 0;
}