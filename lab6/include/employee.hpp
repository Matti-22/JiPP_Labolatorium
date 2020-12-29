#include <iostream>

using namespace std;

class Employee
{
    //Identyfikator pracownika
    string id;
    //Imię
    string name;
    //Nazwisko
    string surname;
    //Identyfikator działu w którym pracuje dane osoba
    string departmentId;
    //Stanowisko na którym pracuje dana osoba
    string position;

public:
    Employee(string id, string name, string surname, string departmentId, string position);
};