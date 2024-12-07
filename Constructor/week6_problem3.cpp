#include <bits/stdc++.h>
using namespace std;

class AddAmount
{
    float amount;

public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int a)
    {
        amount = 50 + a;
    }

    float getam()
    {
        return amount;
    }
};

int main()
{
    AddAmount a1;

    cout << "You have " << a1.getam() << " balance in your account\n";
    a1 = AddAmount(70);
    cout << "You have " << a1.getam() << " balance in your account\n";
}