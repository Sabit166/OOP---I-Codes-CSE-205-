#include <iostream>

// Binary Arithmetic Operators (+, -, *, /, %)
class Number {
    int value;
public:
    Number(int v) : value(v) {}
    Number operator+(const Number& n) { return Number(value + n.value); }
    Number operator-(const Number& n) { return Number(value - n.value); }
    Number operator*(const Number& n) { return Number(value * n.value); }
    Number operator/(const Number& n) { return Number(value / n.value); }
    Number operator%(const Number& n) { return Number(value % n.value); }
    void display() { std::cout << value << std::endl; }
};

// Unary Arithmetic Operators (+, -, ++, --)
class UnaryNumber {
    int value;
public:
    UnaryNumber(int v) : value(v) {}
    UnaryNumber operator+() { return UnaryNumber(+value); }
    UnaryNumber operator-() { return UnaryNumber(-value); }
    UnaryNumber& operator++() { ++value; return *this; }     // Prefix increment
    UnaryNumber operator++(int) { UnaryNumber temp = *this; value++; return temp; } // Postfix increment
    void display() { std::cout << value << std::endl; }
};

// Assignment Operators (=, +=, *=, /=, %=)
class AssignNumber {
    int value;
public:
    AssignNumber(int v) : value(v) {}
    AssignNumber& operator=(const AssignNumber& n) { value = n.value; return *this; }
    AssignNumber& operator+=(const AssignNumber& n) { value += n.value; return *this; }
    void display() { std::cout << value << std::endl; }
};

// Bitwise Operators (&, |, <<, >>, ~, ^)
class BitwiseNumber {
    int value;
public:
    BitwiseNumber(int v) : value(v) {}
    BitwiseNumber operator&(const BitwiseNumber& n) { return BitwiseNumber(value & n.value); }
    BitwiseNumber operator|(const BitwiseNumber& n) { return BitwiseNumber(value | n.value); }
    void display() { std::cout << value << std::endl; }
};

// De-referencing Operator (->)
class Data {
public:
    void show() { std::cout << "Data::show()" << std::endl; }
};

class Wrapper {
    Data* ptr;
public:
    Wrapper() : ptr(new Data()) {}
    Data* operator->() { return ptr; }
};

// Dynamic Memory Allocation, De-allocation (new, delete)
class MemNumber {
    int value;
public:
    MemNumber(int v) : value(v) {}
    void* operator new(size_t size) {
        std::cout << "Custom new" << std::endl;
        return ::operator new(size);
    }
    void operator delete(void* ptr) {
        std::cout << "Custom delete" << std::endl;
        ::operator delete(ptr);
    }
    void display() { std::cout << value << std::endl; }
};

// Subscript Operator ([])
class Array {
    int arr[5];
public:
    Array() { for (int i = 0; i < 5; i++) arr[i] = i; }
    int& operator[](int index) { return arr[index]; }
};

// Function Call Operator ()
class Functor {
public:
    void operator()() { std::cout << "Function call operator" << std::endl; }
};

// Logical Operators (&, ||, !)
class Bool {
    bool value;
public:
    Bool(bool v) : value(v) {}
    bool operator!() { return !value; }
};

// Relational Operators (>, <, ==, <=, >=)
class RelationalNumber {
    int value;
public:
    RelationalNumber(int v) : value(v) {}
    bool operator>(const RelationalNumber& n) { return value > n.value; }
    bool operator==(const RelationalNumber& n) { return value == n.value; }
};

int main() {
    // Test Binary Arithmetic Operators
    Number num1(10), num2(2);
    Number num3 = num1 + num2;
    num3.display();

    // Test Unary Arithmetic Operators
    UnaryNumber unum(10);
    unum++;
    unum.display();

    // Test Assignment Operators
    AssignNumber anum1(10), anum2(5);
    anum1 += anum2;
    anum1.display();

    // Test Bitwise Operators
    BitwiseNumber bnum1(10), bnum2(5);
    BitwiseNumber bnum3 = bnum1 & bnum2;
    bnum3.display();

    // Test De-referencing Operator
    Wrapper w;
    w->show();

    // Test Dynamic Memory Allocation and De-allocation
    MemNumber* mnum = new MemNumber(10);
    mnum->display();
    delete mnum;

    // Test Subscript Operator
    Array arr;
    std::cout << arr[2] << std::endl;

    // Test Function Call Operator
    Functor f;
    f();

    // Test Logical Operators
    Bool b(true);
    std::cout << !b << std::endl;

    // Test Relational Operators
    RelationalNumber rnum1(10), rnum2(5);
    std::cout << (rnum1 > rnum2) << std::endl;

    return 0;
}
