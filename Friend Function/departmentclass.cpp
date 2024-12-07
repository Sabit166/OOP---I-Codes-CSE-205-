#include <bits/stdc++.h>
using namespace std;

class Student;
class Teacher
{
    int department;
public:
    void setdept(int dept)
    {
        department=dept;
    }
    int getdept()
    {
        return department;
    }
    friend bool samedept(Teacher teacher, Student student);

};

class Student
{
    int department;
public:
    void setdept(int dept)
    {
        department=dept;
    }
    int getdept()
    {
        return department;
    }
    friend bool samedept(Teacher teacher, Student student);
};

bool samedept(Teacher teacher, Student student)
{
    if (teacher.department == student.department) return true;
    return false;
}


int main()
{
    Teacher teacher;
    Student student;
    int d1,d2;
    cout << "Enter the department value of teacher: ";
    cin >> d1 ;
    cout << "\nEnter the department value of teacher: ";
    cin >> d2 ;
    teacher.setdept(d1);
    student.setdept(d2);
    if(samedept(teacher, student)) cout << "They are in same department\n";
    else cout <<"Different dept\n";
}
