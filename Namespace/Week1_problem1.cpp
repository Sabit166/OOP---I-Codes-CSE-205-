#include <bits/stdc++.h>
using namespace std;

namespace calculator
{
    namespace addition
    {
        int add(int a, int b)
        {
            return a + b;
        }
    }

    namespace subtraction
    {
        int sub(int a, int b)
        {
            return a - b;
        }
    }
}

int main()
{
    int number1,number2;
    cout<<"Enter two numbers: ";
    cin>>number1>>number2;
    cout << "Sum of two numbers are: ";
    cout << calculator::addition::add(number1, number2) << endl;
    cout << "Difference of two numbers are: ";
    cout << calculator::subtraction::sub(number1, number2) << endl;
}