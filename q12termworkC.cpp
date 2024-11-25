#include <iostream>
using namespace std;

class dummy
{
    int a;

public:
    dummy() {}
    dummy(int x)
    {
        a = x;
    }

    friend dummy operator--(dummy &ob);
    friend dummy operator--(dummy &ob, int);

    void display()
    {
        cout << a << endl;
    }
};

dummy operator--(dummy &ob)
{
    dummy temp;
    temp.a = --ob.a;
    return temp;
}

dummy operator--(dummy &ob, int)
{
    dummy temp;
    temp.a = ob.a;
    ob.a--;
    return temp;
}

int main()
{
    dummy ob1(10), ob2, ob3;

    cout << "Initial value : ";
    ob1.display();

    ob2 = --ob1;
    cout << "After pre-decrement (--ob1):" << endl;
    cout << "ob1: ";
    ob1.display();
    cout << "ob2: ";
    ob2.display();

    ob3 = ob1--;
    cout << "After post-decrement (ob1--):" << endl;
    cout << "ob1: ";
    ob1.display();
    cout << "ob3: ";
    ob3.display();

    return 0;
}
