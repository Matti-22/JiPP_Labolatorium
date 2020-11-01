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
    cout << "Liczby przed zamieniniem a = " << a << " b = " << b << endl;
    swap(&a,&b);
    cout << "Liczby po zamieniniu a = " << a << " b = " << b << endl;

    cout << "slowa przed zamieniniem sa = " << sa << " sb = " << sb << endl;
    swap(&sa,&sb);
    cout << "slowa po zamieniniu sa = " << sa << " sb = " << sb << endl;

    
}