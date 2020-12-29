#include <employee.hpp>

using namespace std;

static int employee_id = 1;

Employee::Employee(string name, string surname, string departmentId, string position)
{
    string new_id = to_string(employee_id);
    this->id = new_id;
    employee_id++;
    this->name = name;
    this->surname = surname;
    this->departmentId = departmentId;
    this->position = position;
}

Employee::Employee(){

};