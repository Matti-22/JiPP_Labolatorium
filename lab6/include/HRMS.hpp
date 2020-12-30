#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <employee.hpp>
#include <vector>
#include <algorithm>

using namespace std;

class HRMS
{
    //kontener w którym będą przechowywani wszyscy pracownicy
    map<string, Employee> all_employees;
    //kontener w którym będzie przechowywane mapowanie pomiędzy identyfikatorami departamentów a identyfikatorami wszystkich pracowników danego departamentu
    map<string, string> employee_DEPID_ID;
    //kontener przechowywujący informacje o zarobkach pracowników
    map<string, double> employee_salary;

    static bool sortByVal(const pair<string, double> &a, const pair<string, double> &b);

public:
    //Metoda dodaje użytkownika do systemu, do danego departamentu, mającego dane wynagrodzenie
    void add(Employee employee, string departmentId, double salary);
    //Metoda wypisująca wszystkich pracowników danego departamentu
    void printDepartment(string departmentId);
    //Metoda zmieniająca wynagrodzenie pracownika
    void changeSalary(string employeeId, double salary);
    //Metoda wypisująca wynagrodzenia pracowników, wraz z informacjami o tych pracownikach
    void printSalaries();
    //Metoda wypisująca wynagrodzenia wszystkich pracowników, wraz z informacjami o tych pracownikach, w kolejności malejącego wynagrodzenia
    void printSalariesSorted();
};
