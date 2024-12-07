#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout << "Hello from base.\n";
    }
};

class Derived: public Base
{
    public:
    Derived()
    {
        cout << "Hello from derived.\n";
    }
};

int main()
{
    Base* ptr;
    ptr = new Derived();
}