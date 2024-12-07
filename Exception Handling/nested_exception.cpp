#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 10;
        }
        catch(...)
        {
            cout << "Inner Exception Handled\n";;
            throw 20;
        }
        
    }
    catch(...)
    {
        cout << "Outer Exception Handled\n";
    }
}