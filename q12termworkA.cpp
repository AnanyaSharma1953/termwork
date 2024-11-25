#include <iostream>
using namespace std;
class complex
{
    int a;

public:
    complex(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    complex()
    {
    }
    friend complex operator-(complex &c1);
};
complex operator-(complex &c1)
{
    complex temp;
    temp = -c1.a;
    return temp;
}
int main()
{
    complex c1(10), c2;
    c1.display();
    c2 = -c1;
    c2.display();
}
