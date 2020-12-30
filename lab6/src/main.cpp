#include <iostream>
#include <HRMS.hpp>

using namespace std;
void fun_test();

void fun()
{
    Employee first("Marek", "Kowalski", "0025", "Tester");
    Employee second("Aleksandra", "Nowak", "0025", "Programista");
    Employee third("Mikolaj", "Smok", "0013", "Marketing");
    Employee fourth("Aleksandra", "Knap", "0019", "Menager");
    Employee fifth("Michal", "Frankowski", "0013", "Menager");
    Employee sixth("Karol", "Bryl", "0025", "Programista");
    Employee seventh("Julia", "Kiszka", "0019", "Serwis");
    Employee eighth("Kacper", "Ciepal", "0013", "Programista");
    Employee nineth("Konrad", "Nowy", "0025", "Szef");
    Employee tenth("Karolina", "Pogan", "0013", "Kierownik");

    HRMS company;

    company.add(first, "0025", 4500);
    company.add(second, "0025", 5200);
    company.add(third, "0013", 2503);
    company.add(fourth, "0019", 10000);
    company.add(fifth, "0013", 8250);
    company.add(sixth, "0025", 6421);
    company.add(seventh, "0019", 2376);
    company.add(eighth, "0013", 9532);
    company.add(nineth, "0025", 15843);
    company.add(tenth, "0013", 7098);

    company.printDepartment("0025");

    cout << endl;
    cout << endl;

    company.printSalaries();

    cout << endl;
    cout << endl;

    company.changeSalary("6",7542);

    company.printSalariesSorted();

}

    int main()
    {
        fun_test();
        //fun();
        return 0;
    }