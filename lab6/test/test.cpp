#include <iostream>
#include <HRMS.hpp>

using namespace std;

void fun_test()
{
    cout << "-----------------TESTING ERRORS-----------------" << endl;
    HRMS company;
    Employee emp_test("Michal", "Aniol", "0013", "BOSS");
    cout << "Adding employee salary less that 0" << endl;
    try
    {
        company.add(emp_test, "0013", -1234);
    }
    catch (invalid_argument &e)
    {
        cout << "ERROR: " << e.what() << endl;
    }

    cout << endl;
    cout << "Changing salary of not existant employee" << endl;
    try
    {
        company.changeSalary("54", 15000);
    }
    catch (invalid_argument &e)
    {
        cout << "ERROR: " << e.what() << endl;
    }
    cout << endl;
    cout << "---------------TESTING ERRORS ENDS---------------" << endl;
}