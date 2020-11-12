#include <iostream>
#include "Headers\macierz.h"
using namespace std;

int main()
{
    Macierz m1(3);

    /*
    double pom;
    for(int i=0;i<m1.wiersze;i++)
    {
        for(int j=0;j<m1.kolumny;j++)
        {
            cin>>pom;
            m1.set(i,j,pom);
        }
    }
    */
   
    /*
    m1.set(1, 2, 13);
    double pom = m1.get(1, 2);
    cout << "pom = " << pom << endl;
    */
    m1.print();
    return 0;
}