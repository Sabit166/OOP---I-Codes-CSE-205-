#include <bits/stdc++.h>
using namespace std;

class Static
{
    public:
    static int x;

    static void setx(int m) {x=m;}

    int getx() {return x;}
};

int Static::x;

int main()
{
    //Static::setx(15);

    Static stat1,stat2;
    stat1.setx(15);
    cout << stat1.getx() << ' ' << stat2.getx();
}