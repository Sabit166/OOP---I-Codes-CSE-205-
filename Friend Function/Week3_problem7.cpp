#include <bits/stdc++.h>
using namespace std;

class Commerce_student;
class Science_student
{
    int roll_no,marks_primary,marks_science;
    public:
    void setRoll(int roll)
    {
        roll_no=roll;
    }
    void setprimary(int primary)
    {
        marks_primary=primary;
    }
    void setscience(int science)
    {
        marks_science=science;
    }

    friend int returnroll(Science_student sc,Commerce_student cm);
};

class Commerce_student
{
    int roll_no,marks_primary,marks_commerce;
    public:
    void setRoll(int roll)
    {
        roll_no=roll;
    }
    void setprimary(int primary)
    {
        marks_primary=primary;
    }
    void setscience(int commerce)
    {
        marks_commerce=commerce;
    }
    friend int returnroll(Science_student sc,Commerce_student cm);
};

int returnroll(Science_student sc,Commerce_student cm)
{
    if(sc.marks_primary+sc.marks_science>cm.marks_primary+cm.marks_commerce) return sc.roll_no;
    else return cm.roll_no;
}

int main()
{
    Science_student sc;
    Commerce_student cm;

    sc.setRoll(202314130);
    sc.setprimary(97);
    sc.setscience(98);

    cm.setRoll(202314131);
    cm.setprimary(96);
    cm.setscience(95);

    cout << "Roll no. of student having more average marks is : " << returnroll(sc,cm);
}