#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int hour, int minute, int seconds)
    {
        hr = hour;
        min = minute;
        sec = seconds;
    }
    void add(Time &ob1,Time &ob2)
    {
        hr=ob1.hr+ob2.hr;
        min=ob1.min+ob2.min;
        sec=ob1.sec+ob2.sec;
        if(sec>=60)
        {
            min=min+sec/60;
            sec=sec%60;
        }
        if(min>=60)
        {
            hr=hr+min/60;
            min=min%60;
        }
    }
    
    void display()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    Time ob1(9,30,25), ob2(1,45,49),ob3;
    ob3.add(ob1,ob2);
    cout<<"Total time :";
    ob3.display();
}