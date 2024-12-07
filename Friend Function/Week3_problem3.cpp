#include <bits/stdc++.h>
using namespace std;
class PointY;
class PointX
{
    int X1,X2;
    public:
    void setX(int x1,int x2)
    {
        X1=x1;
        X2=x2;
    }
    int getX1()
    {
        return X1;
    }
    int getX2()
    {
        return X2;
    }
    friend float Distance(PointX x,PointY y);
};

class PointY
{
    int Y1,Y2;
    public:
    void setY(int y1,int y2)
    {
        Y1=y1;
        Y2=y2;
    }
    int getY1()
    {
        return Y1;
    }
    int getY2()
    {
        return Y2;
    }
    friend float Distance(PointX x,PointY y);
};

float Distance(PointX x,PointY y)
{
    return sqrt(pow((float)x.X1-(float)x.X2,2) + pow((float)y.Y1-(float)y.Y2,2));
}

int main()
{
    PointX x;
    PointY y;
    int x1,y1,x2,y2;
    cout << "Enter the value of Coordinate1 (X1,Y1): ";
    cin >> x1 >> y1;
    cout << "Enter the value of Coordinate2 (X2,Y2): ";
    cin >> x2 >> y2;
    x.setX(x1,x2);
    y.setY(y1,y2);

    cout << "The distance between two points is: " << Distance(x,y);
}