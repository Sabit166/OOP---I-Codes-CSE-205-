#include <bits/stdc++.h>
using namespace std;
class Base {
public:
    void f1() {
        cout << "f1 is called" << endl;
    }

    virtual void display() {
        cout << "Hello from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void f1() {
        cout << "f1 is overridden" << endl;
    }

    void display() {
        cout << "Hello from Derived class" << endl;
    }
};

int main() {
    Base b1;
    Derived d1;

    Base* ptr;

    ptr = &b1;
    ptr->f1();
    ptr->display();

    ptr = &d1;
    ptr->f1();
    ptr->display();

    return 0;
}