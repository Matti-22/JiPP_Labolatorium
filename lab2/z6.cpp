#include <iostream>

using namespace std;

//funkcja zamienia ze soba wartosci a i b uąywając podwójnych wskaźników, dzięki temu powinna być efektywniejsza,
//gdyż do funkcji nie trafia wartość całego obiektu tylko wartość jego wskaźnika
template <class T>
void swap(T **a, T **b)
{
    T pom = *a;
    *a = *b;
    *b = pom;
}

int main()
{
    int a, b;
    int *wa = NULL, *wb = NULL;
    string sa, sb;
    string *wsa = NULL, *wsb = NULL;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;
    cout << "Podaj pierwsze slowo:" << endl;
    cin >> sa;
    cout << "Podaj drugie slowo:" << endl;
    cin >> sb;

    wa = &a;
    wb = &b;
    wsa = &sa;
    wsb = &sb;

    //wyświetlanie efektów programu
    cout << "\nLiczby przed zamieniniem a = " << *wa << " b = " << *wb << endl;
    swap(wa, wb);
    cout << "Liczby po zamieniniu a = " << *wa << " b = " << *wb << endl;

    cout << "\nSlowa przed zamieniniem sa = " << *wsa << " sb = " << *wsb << endl;
    swap(wsa, wsb);
    cout << "Slowa po zamieniniu sa = " << *wsa << " sb = " << *wsb << endl;
}