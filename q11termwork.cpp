// operator overloading of + operators 
// adding and subtracting complex numbers (a+bi)
#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    complex(int x,int y)
    {
       real=x;
       imag=y;
    }

    complex()
    {

    }
    complex operator+(complex &ob){
        complex temp;
        temp.real=real+ob.real;
        temp.imag=imag+ob.imag;
        return temp;
    }
    complex operator-(complex &ob)
    {
        complex temp;
        temp.real=real-ob.real;
        temp.imag=imag-ob.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1(60,40),c2(30,20),c3,c4;
    c3=c1+c2;
    c3.display();
    c4=c1-c2;
    c4.display();
}
