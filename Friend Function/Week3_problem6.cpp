#include <bits/stdc++.h>
using namespace std;

class ComplexNumber
{
    int Real,Complex;
    public:
    void setReal(int real)
    {
        Real=real;
    }
    void setComplex(int cmplex)
    {
        Complex=cmplex;
    }
    friend int add_real(ComplexNumber c1,ComplexNumber c2);
    friend int add_complex(ComplexNumber c1,ComplexNumber c2);
    friend int subtract_real(ComplexNumber c1,ComplexNumber c2);
    friend int subtract_complex(ComplexNumber c1,ComplexNumber c2);
};

int add_real(ComplexNumber c1,ComplexNumber c2)
{
    return c1.Real+c2.Real;
}

int add_complex(ComplexNumber c1,ComplexNumber c2)
{
    return c1.Complex+c2.Complex;
}

int subtract_real(ComplexNumber c1,ComplexNumber c2)
{
    return c1.Real-c2.Real;
}

int subtract_complex(ComplexNumber c1,ComplexNumber c2)
{
    return c1.Complex-c2.Complex;
}

int main()
{
    ComplexNumber c1,c2;
    c1.setReal(10);
    c1.setComplex(20);
    c2.setReal(30);
    c2.setComplex(40);

    cout << "Addition of two numbers is : " << add_real(c1,c2) << " + " << add_complex(c1,c2) << 'i';
    cout << "\nSubtraction of two numbers is : " << subtract_real(c1,c2) << " + " << subtract_complex(c1,c2) << 'i';
}