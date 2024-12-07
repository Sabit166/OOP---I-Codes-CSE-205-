#include <bits/stdc++.h>
using namespace std;

class Vector
{
    int i,j,k;
    public:
    Vector(int i,int j,int k)
    {
        this->i = i;
        this->j = j;
        this->k = k;
    }
    Vector(){}

    Vector operator*(const int x) {return Vector(x*i, x*j, x*k);}

    void print()
    {
        cout << "i: " << i << "\nj: " << j << "\nk: " << k << endl;
    }
};

int main()
{
    Vector u(3,4,5);
    Vector v;
    v=u*3;
    v.print();
}