#include <bits/stdc++.h>
using namespace std;

class String
{
    int len;
    char *ptr;

public:
    String(int len, const char *ptr);
    String(const String &s);
    void print();
    ~String();
    friend int compare(String s1, String S2);
    friend char *concate(String s1, String s2);
};

String::String(int len, const char *ptr)
{
    this->len = len;
    this->ptr = new char[strlen(ptr)];
    strcpy(this->ptr, ptr);
    cout << "Constructor Calling " << ptr << endl;
}

String::String(const String &s)
{
    len = s.len;
    ptr = new char[strlen(s.ptr) + 1];
    strcpy(ptr, s.ptr);
    cout << "Copy constructor calling " << ptr << endl;
}

void String::print()
{
    for (int i = 0; i < strlen(ptr); i++)
        cout << ptr[i];
    cout << endl;
}

String::~String()
{
    cout << "Destructor calling " << ptr << endl;
    delete[] ptr;
}

int compare(String s1, String s2)
{
    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < strlen(s1.ptr); i++)
    {
        ct1 += s1.ptr[i];
    }

    for (int i = 0; i < strlen(s2.ptr); i++)
    {
        ct2 += s2.ptr[i];
    }
    if (ct1 > ct2)
        return 1;
    if (ct1 < ct2)
        return -1;
    if (ct1 == ct2)
        return 0;
}

char *concate(String s1, String s2)
{
    int l = strlen(s1.ptr) + strlen(s2.ptr);

    char *temp = new char[l];

    for (int i = 0; i < strlen(s1.ptr); i++)
    {
        temp[i] = s1.ptr[i];
    }

    for (int i = strlen(s1.ptr), j = 0; i < l; i++, j++)
    {
        temp[i] = s2.ptr[j];
    }

    delete[] s1.ptr;
    s1.ptr = temp;
    s1.ptr[l] = '\0';
    char *c = &s1.ptr[0];
    return c;
}

int main()
{
    system("cls");
    String s1(3, "s12");
    String s2(3, "s21");

    cout << compare(s1, s2) << endl;
    ;
    cout << concate(s1, s2) << endl;
}