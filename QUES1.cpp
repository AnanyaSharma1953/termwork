#include<iostream>
    using namespace std;
        int main()
        {
            int n=0;
            cout<<"enter no. of users";
            cin>>n;
            string names[n];//arrays to store names of n users
            int units[n];//arrays to store units of n users
            for(int i=0;i<n;i++)//entering data
            {
                cout<<"enter name";
                cin>>names[i];
                cout<<"enter unit ";
                cin>>units[i];
            }
            for(int i=0;i<n;i++)
            {
                int u=units[i];
                float charges=0;//stores the charges 
                if(u<=100)
                charges=50+(0.6*u);
                else if(u>100 && u<=300)
                charges=50+(0.6*100)+(0.8*(u-100));
                else
                charges=50+(0.6*100)+(0.8*200)+(0.9*(u-300));
                if(charges>300)//calculates additional surcharge
                    charges=charges+(15*charges/100);
                cout<<"name is"<<names[i]<<"and charges are"<<charges<<"\n";
            }
            return 0;
        }
