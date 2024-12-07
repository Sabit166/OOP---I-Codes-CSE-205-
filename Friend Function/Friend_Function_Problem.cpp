#include <bits/stdc++.h>
using namespace std;

class String
{
    string s;
    public:
    String(string s)
    {
        this->s=s;
    }
    friend bool pallindrome(String s);
    friend string concate(String s1,String s2);
    ~String()
    {
        
    }
};

bool pallindrome(String s)
{
    for(int i=0,j=s.s.size()-1;i<s.s.size()/2;i++,j--)
    {
        if(s.s[i]!=s.s[j]) return false;
    }
    return true;
}

string concate(String s1,String s2)
{
    s1.s+=s2.s;
    return s1.s;
}


int main()
{
    string S1,S2;
    cin >> S1 >> S2;
    String s1(S1),s2(S2);
    cout << pallindrome(s1) << endl;
    cout << pallindrome(s2) << endl;
    cout << concate(s1,s2);
}