#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    float length,breadth;
    public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int num)
    {
        length=num;
        breadth=num;
    }

    Rectangle(int num1,int num2)
    {
        length=num1;
        breadth=num2;
    }


    float area()
    {
        return length*breadth;
    }
    
};

int main()
{
    Rectangle r;
    cout << "\nArea of the Rectangle is : " << r.area() << endl;

    Rectangle r1(5);
    cout << "\nArea of the Rectangle is : " << r1.area() << endl;

    Rectangle r2(5,6);
    cout << "\nArea of the Rectangle is : " << r2.area() << endl;
}