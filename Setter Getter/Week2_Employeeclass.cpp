#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string Name;
    string ID;
    int Salary;
    public:
    void setname(string name)
    {
        Name=name;
    }
    void setID(string id)
    {
        ID=id;
    }
    void setSalary(int salary)
    {
        Salary=salary;
    }
    string getname()
    {
        return Name;
    }
    string getID()
    {
        return ID;
    }
    int getSalary()
    {
        return Salary;
    }
};

int main()
{
    Employee employee;
    string name,id;
    int salary;
    cout << "Enter employee Name: ";
    cin >> name;
    employee.setname(name);
    cout << "\nEnter employee ID: ";
    cin >> id;
    employee.setID(id);
    cout << "\nEnter employee Salary: ";
    cin >> salary;
    employee.setSalary(salary);

    float performance;
    cout << "Enter Employee performance: ";
    cin >> performance;
    if(performance>=1.4) cout << "Salary Updated!";
    else cout << "Invalid performance rating!";
}