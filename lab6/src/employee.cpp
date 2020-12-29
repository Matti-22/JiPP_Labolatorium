#include <iostream>
#include <employee.hpp>

using namespace std;

Employee::Employee(string id, string name, string surname, string departmentId, string position)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->departmentId = departmentId;
    this->position = position;
}