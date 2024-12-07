#include <bits/stdc++.h>
using namespace std;

class student {
    int id;
    char* name;
public:
    student( char* p, int q) {
        id = q;
        name = new char[strlen(p) + 1];  // Allocate memory including space for null terminator
        strcpy(name, p);
        name[strlen(p)]='\0';
        cout << "Constructing: " << name << endl;
    }

    student(const student &obj) {
        id = obj.id;
        name = new char[strlen(obj.name) + 1];  // Allocate memory including space for null terminator
        strcpy(name, obj.name);
        name[strlen(obj.name)]='\0';
        cout << "Copy Constructing: " << name << endl;
    }


    ~student() {
        cout << "Destructing: " << name << endl;
        delete[] name;
    }

    int getId() { return id; }
    char* getName() { return name; }
};

student func(const student st) {
    student tmp("temp", 3);
    return tmp;
}

int main() {
    system("cls");
    student st1("St1", 1), st2("st2", 2);
    student st3 = st2;  // Copy constructor is called here
    st2 = func(st1);  // Copy assignment operator is called here
    cout << func(st2).getId() << endl;
    cout << func(st1).getName() << endl;
}
