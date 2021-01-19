#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
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
    //Konstruktor czytający dane na temat macierzy z pliku, przyjmujący jako argument ścieżkę do tego pliku
    Macierz(string path);
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

    //operator + wykonujący dodawanie macierzy
    Macierz operator+ (const Macierz &m2);

    //operator - wykonujący odejmowanie macierzy
    Macierz operator- (Macierz m2);

    //operator * wykonujący mnożenie macierzy
    Macierz operator* (Macierz m2);

    //operator wyjścia służący do wypisywania macierzy
    //friend ostream& operator<< (ostream &out, Macierz m1);

    //operator == służacy do porównywania dwóch macierzy
    bool operator== (Macierz m2);

    //operator [] służący do pobrania listy zawierającej elementy danego wiersza macierzy
    double* operator[] (int i);
};