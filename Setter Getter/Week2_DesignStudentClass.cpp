#include <bits/stdc++.h>
using namespace std;

class Student
{
    int ID;
    string Name;
    float cgpa;
    public:
    void setID(int id)
    {
        ID=id;
    }
    void setNAME(string name)
    {
        Name=name;
    }
    void setCGPA(float CGPA)
    {
        cgpa=CGPA;
    }
    void display()
    {
        cout << "Student " << ID << " Name: " << Name << " CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student std1, std2;
    int std1id,std2id;
    string std1name,std2name;
    float std1cgpa,std2cgpa;

    cout << "Enter Student 1 ID: ";
    cin >> std1id;
    cout << "Enter Student 1 Name: ";
    cin >> std1name;
    cout << "Enter Student 1 CGPA: ";
    cin >> std1cgpa;

    cout << "Enter Student 2 ID: ";
    cin >> std2id;
    cout << "Enter Student 2 Name: ";
    cin >> std2name;
    cout << "Enter Student 2 CGPA: ";
    cin >> std2cgpa;

    std1.setID(std1id);
    std1.setNAME(std1name);
    std1.setCGPA(std1cgpa);

    std2.setID(std2id);
    std2.setNAME(std2name);
    std2.setCGPA(std2cgpa);

    std1.display();
    std2.display();
}