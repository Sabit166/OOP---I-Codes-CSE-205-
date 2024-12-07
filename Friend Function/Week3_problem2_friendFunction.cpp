#include <bits/stdc++.h>
using namespace std;

class Student;
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
    friend bool SameDepartment(Student student,Teacher teacher);
};

class Student
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
    friend bool SameDepartment(Student student,Teacher teacher);
};

bool SameDepartment(Student student,Teacher teacher)
{
    return student.getDept()==teacher.dept;
}

int main()
{
    Teacher teacher;
    Student student;
    int department_student, department_teacher;
    cout << "Enter department of Student: ";
    cin >> department_student;
    student.setDept(department_student);

    cout << "\nEnter department of Teacher: ";
    cin >> department_teacher;
    teacher.setDept(department_teacher);

    if (SameDepartment(student,teacher))
        cout << "They are in the same department";
    else
        cout << "They are not in the same department";
}