#include <iostream>
using namespace std;
class UserTwo;
class UserOne
{
    string name, fathername, mothername;
    char gender;

public:
    void InputInfo()
    {
        cout << "Enter the first person's name :";
        getline(cin, name);
        cout << "Enter father's name :";
        getline(cin, fathername);
        cout << "Enter mother's name :";
        getline(cin, mothername);
        cout << "Enter gender : F for female or M for male :";
        cin>>gender;
    }
    friend void Userchecker(UserOne&,UserTwo&);
};
class UserTwo
{
    string name, fathername, mothername;
    char gender;

public:
    void InputInfo()
    {
        cout << "Enter the second person's name :";
        getline(cin, name);
        cout << "Enter father's name :";
        getline(cin, fathername);
        cout << "Enter mother's name :";
        getline(cin, mothername);
        cout << "Enter gender : F for female or M for male :";
        cin>>gender;
         cin.ignore();
    }
    friend void Userchecker(UserOne&,UserTwo&);
};
void Userchecker(UserOne &One,UserTwo &Two)
{
    if((One.fathername==Two.fathername)&&(One.mothername==Two.mothername))
    {
        cout<<"Belongs to same family"<<endl;
        if(One.gender==Two.gender)
        {
            cout<<"We are brothers or sisters ";
        }
        else{
            cout<<"We are brother and sister ";
        }
    }
    else{
        cout<<"Belongs to different family";
    }
}
int main()
{
    UserOne One;
    UserTwo Two;
    cout<<"Enter first person's details :"<<endl;
    One.InputInfo();
    cout<<"Enter second person's details :"<<endl;
    getchar();
    Two.InputInfo();
    Userchecker(One,Two);
}