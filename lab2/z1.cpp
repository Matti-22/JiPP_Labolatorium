#include <iostream>

using namespace std;

//Funkcjia zamienia liczby jeśli pierwsza z nich jest mniejsza od drugiej
void wieksza(int *w1, int *w2)
{
    int pom;
    if (*w1 < *w2)
    {
        pom = *w1;
        *w1 = *w2;
        *w2 = pom;
    }
}

int main(int argc, char *argv[])
{
    int a, b;
    int *w1 = NULL, *w2 = NULL;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;
    //Przypisanie wskaźniką wartości naszych liczb
    w1 = &a;
    w2 = &b;

    wieksza(w1, w2);
    cout << "Liczba " << *w1 << " Jest wieksza lub rowna od liczby " << *w2 << endl;
}