#include <iostream>
#include <cstring>
using namespace std;

class Chararray
{
    public:
    char* data;
    int size;
    Chararray(const char* str = "")
    {
        size = strlen(data) + 1;
        data = new char[size];
        strcpy(data,str);
    }

    Chararray operator+(const char* str) const
    {
        int tempsize = size+strlen(str);
        char* temp = new char[tempsize];
        strcpy(temp,data);
        strcat(temp,str);
        return Chararray(temp);
    }
    Chararray operator+=(const Chararray array)
    {
        int tempsize = size + strlen(array.data);
        char* temp = new char[tempsize];
        strcpy(temp, data);
        strcat(temp, array.data);
        delete[] data;
        data = temp;
        size = tempsize - 1;
        return *this;
    }

    ~Chararray()
    {
        delete[] data;
    }
};

int main()
{
    Chararray array("Sabit");

    array+=" Siraji";
    int i;
    while (array.data[i] != '\0' && i < 12) {
    cout << array.data[i];
    i++;
    }
}