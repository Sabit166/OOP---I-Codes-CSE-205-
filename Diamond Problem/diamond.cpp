#include <iostream>

using namespace std;

class Animal {
public:
    virtual void Makesound() {
        cout << "Generic animal sound" << endl;
    }
};

class Mammal : public virtual Animal {
public:
    void move() {
        cout << "Walk" << endl;
    }
};

class Bird : public virtual Animal {
public:
    void move() {
        cout << "Fly" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void Makesound() override {
        cout << "Chirp" << endl;
    }
};

int main() {
    Animal *bat = new Bat();
    //bat->move();
    bat->Makesound();

    return 0;
}