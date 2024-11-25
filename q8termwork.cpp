#include <iostream>
using namespace std;
class tollbooth
{
    unsigned int cars;
    double money;

public:
    tollbooth()
    {
        cars = 0;
        money = 0.0;
    }
    void payingCars()
    {
        cars++;
        money = money + 0.5;
    }
    void nonPayingCars()
    {
        cars++;
    }
    void display()
    {
        cout <<"Total cars are :"<< cars<<endl;
        cout <<"Total amount collected is :"<< money;
    }
};
int main()
{
    tollbooth t;
    char key;
     cout << "press 1 for paying cars\npress 2 for NonPaying cars\npress ESC to exit :"<<endl;
    do
    {
        cout<<"Enter your choice :";
        cin >> key;
        switch (key)
        {
        case '1':
            t.payingCars();
            break;
        case '2':
            t.nonPayingCars();
            break;
        }
    } while (key != 27);
    t.display();
}