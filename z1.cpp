#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    int *w1 = NULL, *w2 = NULL;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;

    *w1 = a;
    *w2 = b;    

}