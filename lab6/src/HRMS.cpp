#include <HRMS.hpp>

using namespace std;

void HRMS::add(Employee employee, string departmentId, double salary)
{
    string id = employee.id;
    if (salary < 0)
    {
        stringstream errorMsg;
        errorMsg << "Salary must be a non-negative number" << endl;
        throw invalid_argument(errorMsg.str());
    }

    this->all_employees[id] = employee;
    this->employee_DEPID_ID[id] = departmentId;
    this->employee_salary[id] = salary;
}

void HRMS::printDepartment(string departmentId)
{
    int counter = 0;
    map<string, string>::iterator it;
    for (it = employee_DEPID_ID.begin(); it != employee_DEPID_ID.end(); ++it)
    {
        if (it->second == departmentId)
        {
            cout << this->all_employees[it->first].name << " " << this->all_employees[it->first].surname << "  ID: " << this->all_employees[it->first].id << endl;
            counter++;
        }
    }
    if (counter > 0)
    {
        cout << "Found " << counter << " employees in department: " << departmentId << endl;
    }
    else
    {
        cout << "Not found any employees in department: " << departmentId << endl;
        cout << "You should check if the given department is correct..." << endl;
    }
}

void HRMS::changeSalary(string employeeId, double salary)
{
    if (salary < 0)
    {
        stringstream errorMsg;
        errorMsg << "Salary must be a non-negative number" << endl;
        throw invalid_argument(errorMsg.str());
    }

    map<string, string>::iterator it;
    int i = employee_DEPID_ID.size();
    int pom = 1;
    for (it = employee_DEPID_ID.begin(); it != employee_DEPID_ID.end(); it++)
    {
        if (it->first == employeeId)
        {
            this->employee_salary[employeeId] = salary;
            break;
        }
        if (pom == i)
        {
            stringstream errorMsg;
            errorMsg << "This ID does not exist in the company" << endl;
            throw invalid_argument(errorMsg.str());
        }
        pom++;
    }
}

void HRMS::printSalaries()
{
    map<string, double>::iterator it;
    for (it = employee_salary.begin(); it != employee_salary.end(); ++it)
    {
        cout << this->all_employees[it->first].name << " " << this->all_employees[it->first].surname << " ID: " << this->all_employees[it->first].id << " DepartmentID: " << this->all_employees[it->first].departmentId << " Position: " << this->all_employees[it->first].position << " Salary: " << it->second << endl;
    }
}

void HRMS::printSalariesSorted()
{
    vector<pair<string, double>> v;
    map<string, double>::iterator it;

    for (it = employee_salary.begin(); it != employee_salary.end(); ++it)
    {
        v.push_back(make_pair(it->first, it->second));
    }

    sort(v.begin(), v.end(), sortByVal);

    vector<pair<string, double>>::iterator it2;
    for (it2 = v.begin(); it2 != v.end(); ++it2)
    {
        cout << this->all_employees[it2->first].name << " " << this->all_employees[it2->first].surname << " ID: " << this->all_employees[it2->first].id << " DepartmentID: " << this->all_employees[it2->first].departmentId << " Position: " << this->all_employees[it2->first].position << " Salary: " << it2->second << endl;
    }
}

bool HRMS::sortByVal(const pair<string, double> &a, const pair<string, double> &b)
{
    return (a.second > b.second);
}