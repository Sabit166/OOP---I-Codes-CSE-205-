#include <iostream>

class Complex {
public:
    double real, imag;

    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    Complex operator ()(int n)
    {
        return (real + imag)*n;
    }

    void print() {
        std::cout << real << " + i" << imag << std::endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 =c1(10);
    c3.print();
}