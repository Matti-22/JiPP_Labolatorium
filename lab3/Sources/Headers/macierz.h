#include <iostream>
using namespace std;

class Macierz
{
    int wiersze, kolumny;
    double **tablica;

public:
    //Konstruktor służący do tworzenia macierzy o x wierszach i y kolumnach
    Macierz(int w, int k);
    //Konstruktor służący do tworzenia macierzy kwadratowej
    Macierz(int r);
    //Destruktor
    ~Macierz();

    //Metoda ustawia wartość elementu (n,m) na val
    void set(int n, int m, double val);

    //Metoda pobierająca element (n,m)
    double get(int n, int m);

    //Metoda przyjmująca jako argument inną macierz zwraca jako wynik nową macierz będącą sumą bieżacej macierzy oraz macierzy przekazanej jako argument
    Macierz add(Macierz m2);

    //Metoda przyjmująca jako argument inną macierz i zwracająca jako wynik nową macierz będącą różnicą bieżącej macierzy oraz macierzy przekazanej jako argument
    Macierz subtract(Macierz m2);

    //Metoda przyjmująca jako argument inną macierz i zwracająca jako wynik nową macierz będącą iloczynem bieżącej macierzy oraz macierzy przekazanej jako argument
    Macierz multiply(Macierz m2);

    //Metoda zwracająca liczbę kolumn macierzy
    int cols();

    //Metoda zwracająca liczbę wierszy macierzy
    int rows();

    //Metoda ma za zadanie wyświetlić macierz na ekranie
    void print();

    //Metoda zapisująca macierz w pliku, w pierwszym wierszu pliku jej wymiary (liczbę kolumn i wierszy) oraz jej zawartość (każdy wiersz macierzy w osobnym wierszu pliku)
    void store(string filename, string path);
};