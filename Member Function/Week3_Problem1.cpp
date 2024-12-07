#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    int dept;

public:
    void setDept(int department)
    {
        dept = department;
    }
    int getDept()
    {
        return dept;
    }
    bool SameDepartment(Teacher teacher);
};

bool Teacher::SameDepartment(Teacher teacher)
{
    if (teacher.dept == dept)
        return true;
    return false;
}

int main()
{
    Teacher teacher1, teacher2;
    int department1, department2;
    cout << "Enter department of Teacher1: ";
    cin >> department1;
    teacher1.setDept(department1);

    cout << "\nEnter department of Teacher2: ";
    cin >> department2;
    teacher2.setDept(department2);

    if (teacher1.SameDepartment(teacher2))
        cout << "They are in the same department";
    else
        cout << "They are not in the same department";
}