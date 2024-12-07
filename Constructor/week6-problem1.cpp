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
    float getlength()
    {
        return length;
    }
    float getbreadth()
    {
        return breadth;
    }
    void set(float l,float b)
    {
        length=l;
        breadth=b;
    }

    float area()
    {
        return length*breadth;
    }
    
};

int main()
{
    Rectangle r;
    cout << r.getbreadth() << ' ' << r.getlength() << endl;
    float l,b;
    cout << "Enter length of the rectangle: ";
    cin >> l;

    cout << "\nEnter breadth of the rectangle: ";
    cin >> b;
    r.set(l,b);

    cout << "\nArea of the Rectangle is : " << r.area();
}