#include <bits/stdc++.h>
using namespace std;
class Base {
public:
    virtual ~Base() {
        cout << "Base destructed.\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructed.\n";
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Calls ~Derived()
}