#include <bits/stdc++.h>
using namespace std;

class area
{
    int length;
    int breadth;
    public:
        void setDim(int Length,int Breadth)
        {
            length=Length;
            breadth=Breadth;
        }
        int getArea()
        {
            return length*breadth;
        }
};

int main()
{
    area a;
    int len,bread;
    cout << "Please Enter Length and Breadth\n";
    cin >> len >> bread;
    a.setDim(len,bread);
    cout << "Area of the Rectangle is " << a.getArea();
}