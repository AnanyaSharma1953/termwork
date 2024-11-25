#include <iostream>
using namespace std;
class dummy
{
    int a;

public:
    dummy()
    {
    }
    dummy(int x)
    {
        a = x;
    }
    friend dummy operator++(dummy &ob);      // to overload pre increment operator
    friend dummy operator++(dummy &ob, int); // to overload post increment operator
    void display()
    {
        cout << a << endl;
    }
};
// pre increment
dummy operator++(dummy &ob)
{
    dummy temp;
    temp.a = ++ob.a;
    return temp;
}

// post increment
dummy operator++(dummy &ob, int)
{
    dummy temp;
    temp.a = ob.a;
    ob.a++;
    return temp;
}

int main()
{
    dummy ob1(10), ob2, ob3;
    cout<<"original value :";
    ob1.display();
    ob2 = ++ob1;
    cout << "After pre-increment (++ob1):" << endl;
    cout << "ob1: ";
    ob1.display();
    cout << "ob2: ";
    ob2.display();

    ob3 = ob1++;
    cout << "After post-increment (ob1++):" << endl;
    cout << "ob1: ";
    ob1.display();
    cout << "ob3: ";
    ob3.display();
}
