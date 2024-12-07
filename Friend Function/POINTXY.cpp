#include <bits/stdc++.h>
#include <cmath>
using namespace std;
class PointY;
class PointX
{
    int x1,x2;
public:
    void set1(int x)
    {
        x1=x;
    }
    void set2(int x)
    {
        x2=x;
    }
    friend float distance(PointX p1,PointY p2);
};

class PointY
{
    int y1,y2;
public:
    void set1(int y)
    {
        y1=y;
    }
    void set2(int y)
    {
        y2=y;
    }
    friend float distance(PointX p1,PointY p2);
};

float distance(PointX p1,PointY p2)
{
    return sqrt(pow(p1.x2 - p1.x1, 2) + pow(p2.y2 - p2.y1, 2));
}

int main()
{
    PointX X;
    PointY Y;

    int x1,x2,y1,y2;
    cin >> x1 >> x2 >> y1 >> y2;
    X.set1(x1);
    X.set2(x2);
    Y.set1(y1);
    Y.set1(y2);

    cout << distance(X,Y);
}
