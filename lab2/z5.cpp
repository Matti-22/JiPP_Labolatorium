#include <iostream>

using namespace std;

//funkcja zamienia ze soba wartosci a i b uąywając wskaźników
template <class T>
void swap(T *a, T *b)
{
    T pom = *a;
    *a = *b;
    *b = pom;
}

//Funkcja sprawdza poprawnosc funkcji swap
template <class T>
void test(T a, T b)
{
    T aPo = a, bPo = b;
    swap(a, b);
    if (aPo == b && bPo == a)
    {
        cout << "Funkcja swap dziala poprawnie\n" << endl;
    }
    else
    {
        cout << "Funkcja swap NIE dziala\n" << endl;
    }
}

int main()
{
    int a, b;
    string sa, sb;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;
    cout << "Podaj pierwsze slowo:" << endl;
    cin >> sa;
    cout << "Podaj drugie slowo:" << endl;
    cin >> sb;

    //wyświetlanie efektów programu
    cout << "\nLiczby przed zamieniniem a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "Liczby po zamieniniu a = " << a << " b = " << b << endl;
    cout << "Sprawdzenie funkcji swap:" << endl;
    test(a, b);

    cout << "slowa przed zamieniniem sa = " << sa << " sb = " << sb << endl;
    swap(&sa, &sb);
    cout << "slowa po zamieniniu sa = " << sa << " sb = " << sb << endl;
    cout << "Sprawdzenie funkcji swap:" << endl;
    test(sa, sb);
}