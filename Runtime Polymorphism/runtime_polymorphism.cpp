#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    int x;
    int y;

    void display()
    {
        cout << x << ", " << y << endl;
    }
};

class Point3D : public Point
{
public:
    int z;

    void display()
    {
        cout << x << ", " << y << ", " << z << endl;
    }
};

void display(Point p)
{
    cout << p.x << ", " << p.y << ", " << p.z << endl;
}

int main()
{
    Point p1;
    p1.x = 10;
    p1.y = 20;
    display(p1);

    Point3D p2;
    p2.x = 10;
    p2.y = 20;
    p2.z = 30;
    display(p2);

    return 0;
}
