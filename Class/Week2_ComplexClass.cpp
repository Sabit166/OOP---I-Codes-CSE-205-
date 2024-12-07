#include <bits/stdc++.h>
using namespace std;

class complex
{
    int real1,complex1,real2,complex2;
    public:
        int realSum(int r1,int r2)
        {
            real1=r1;
            real2=r2;
            return r1+r2;
        }
        int complexSum(int c1,int c2)
        {
            complex1=c1;
            complex2=c2;
            return c1+c2;
        }
}comp;

int main()
{
    int real1,complex1,real2,complex2;
    cout << "Please enter Real part of first number\n";
    cin >> real1;
    cout << "Please enter complex partof first number\n";
    cin >> complex1;
    cout << "Please enter Real part of second number\n";
    cin >> real2;
    cout << "Please enter complex partof second number\n";
    cin >> complex2;

    cout << "The complex number is: " << comp.realSum(real1,real2) << " + i" << comp.complexSum(complex1,complex2) << endl;

    return 0;
}