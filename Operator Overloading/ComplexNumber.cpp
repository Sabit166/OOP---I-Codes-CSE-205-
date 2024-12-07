#include <bits/stdc++.h>
using namespace std;
class Complex;
class Complex
{
    public:
    int rl,cmp;
    Complex(int rl = 0,int cmp = 0)
    {
        this->rl = rl;
        this->cmp = cmp;
    }

    Complex operator+(const Complex& complex)
    {
        cout << rl << ' ' << cmp << ' ' << complex.rl << ' ' << complex.cmp << endl;
        return Complex(rl + complex.rl, cmp + complex.cmp);
    }
};
int main()
{
    Complex c1(3,4), c2(5,6);
    Complex c3 = c1 + c2;
    cout << c3.rl << ' ' << c3.cmp;
}