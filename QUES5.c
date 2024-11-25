#include<iostream>
using namespace std;
class Student
{
    int scores[5];
    public:
    void input()//enter marks
    {
        for(int i=0;i<5;i++)
        {
            cin>>scores[i];
        }
    }
    int calculateTotalScore() // function to deposit money in the account
    {
        int t=0;
        for(int i=0;i<5;i++)
        {
            t=t+scores[i];
        }
        return t;
    }
};
int main() 
{
    int n;
    int sum=0;
    int c=0,x=0;
    cout<<"\n enter the no. of students \n";
    cin>>n;
    int t[n-1];
    for(int i=0;i<n;i++)
    {
        x=0;
        Student obj;
        obj.input();
        x=obj.calculateTotalScore();
        if(i==0)
        {
            sum=x;
        }
        if(i!=0&&x>sum)
        c++;
    }
    cout<<c;
    return 0;
}

