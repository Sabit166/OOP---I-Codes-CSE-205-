#include<bits/stdc++.h>

using namespace std;


class Complex{
    double real;
    double img;
    public:
    Complex(double r, double i){
        real=r;
        img=i;
    }
    Complex operator+(Complex obj){
        Complex result(real+obj.real,img+obj.img);
        return result;
    }
    int operator()(int b){
        return (real+img)*b;
    }
    int operator+(int i){
        cout<<"i ";
        return i+real;
    }

    //friend int operator+(int i, Complex obj);

    Complex operator--(int){
        Complex temp(real--, img--);
        return temp;
    }

    bool operator==(Complex obj){
        if(obj.real==real && obj.img==img){
            return true;
        }
        else{
            return false;
        }
    }

};

// int operator+(int i, Complex obj){
//     return i+obj.real;
// }

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    int res;
    Complex c3=c1+c2;
    res=c1(10);
    res=c1+10;
    cout<<res<<endl;
    c2--;
    if(c1==c2){
        cout<<"cqual"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
} 