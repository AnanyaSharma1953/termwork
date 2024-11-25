#include<iostream>
using namespace std;
class Hotel
{
    public:
    int rno;
    string name;
    float tariff;
    int nod;
    void checkin()
    {
        cout<<"enter rno  ";//enter roll no.
        cin>>rno;
        cout<<"enter tariff  ";//enter tariff
        cin>>tariff;
        cout<<"enter nod  "; // enter no. of days
        cin>>nod;
        cin.ignore();
        cout<<"enter name  ";// enter name
        getline(cin,name);
    }
    float CALC()
    {
        float tt;
        tt=(nod*tariff); // calculate amount
        if(tt>10000)
        {
            tt=1.05*nod*tariff;
        }
        return tt;
    }
    void checkout()
    {
        cout<<"\nrno is: "<<rno<<"\nname:  "<<name<<"\ntariff:  "<<tariff<<"\nnod:  "<<nod<<"\namount: "<<CALC();
    }
};
int main() 
{
    Hotel obj;
    obj.checkin();
    obj.checkout();
    return 0;
}

