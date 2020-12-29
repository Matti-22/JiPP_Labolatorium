#include <iostream>
//#include <employee.hpp>
#include <HRMS.hpp>

using namespace std;

int main()
{
    HRMS company;

    Employee first("Marek", "Kowalski", "0025", "Tester");
    Employee second("Aleksandra", "Nowak", "0025", "Programista");
    company.add(first, "0025", 4500);
    company.add(second, "0025", 5200);

    //company.printDepartment("0025");
    company.printSalaries();
    company.changeSalary("2", 1500);
    company.printSalaries();
   

    //cout << endl;
    //cout << first.id << " " << first.name << " " << first.surname << " " << first.departmentId << " " << first.position << endl;
    
    return 0;
}