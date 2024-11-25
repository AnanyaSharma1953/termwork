#include<iostream>
using namespace std;
class Employee
{
    public:
    int acc;
    string name;
    float bal;
    string type;
    void getdata()//enter values
    {
        cout<<"enter account no.  ";
        cin>>acc;
        cout<<"enter balance  ";
        cin>>bal;
        cout<<"enter type  ";
        cin>>type;
        cin.ignore();
        cout<<"enter name  ";
        getline(cin,name);
    }
    void deposit() // function to deposit money in the account
    {
        float d;
        cout<<"enter deposit  ";
        cin>>d;
        bal=bal+d;
    }
    void withdraw() // function to withdraw amount
    {
        float ff;
        cout<<"enter withdrawal amount ";
        cin>>ff;
        bal=bal-ff;
    }
    void display()
    {
        cout<<"\nname:  "<<name<<"\nbalance: "<<bal<<"\n";
    }
};
int main() 
{
    Employee obj; // object of class "Employee"
    obj.getdata();
    int c=0;
    do
    {
        cout<<"enter 1:deposit 2:withdraw  ";
        cin>>c;
        switch(c) // menu driven program
        {
            case 1:
            obj.deposit();
            obj.display();
            break;
            case 2:
            obj.withdraw();
            obj.display();
            break;
            default:
            cout<<"invalid";
        }
    }while(c<=2);
    return 0;
}

