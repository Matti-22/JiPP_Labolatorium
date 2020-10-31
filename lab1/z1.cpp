#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int *tab = new(int);

    //Dodawanie argumentów programu do tablicy "tab"
    for (int i = 0; i < argc; i++)
    {
        tab[i] = atoi(argv[i + 1]);
    }

    //Sortowanie tablicy "tab"
    sort(tab, tab + argc);

    //Wypisywanie elementów na ekran
    cout << "\nElementy uporzadkowane:\n";
    for (int i = 1; i < argc; i++)
    {
        cout << tab[i] << ' ';
    }
    return 0;
}