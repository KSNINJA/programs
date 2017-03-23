#include<iostream>
#include<conio>
using namespace std;
void login(string UserName,int Pin)
{
    if((UserName=="kartik")&&(Pin==123456))
    {
        cout<<"Welcome";
        cout<<endl;
        cout<<"Windows 7";
    }
    else
    {
        string NewUsername;
        int NewPin;
        cout<<"RESET ";
        cout<<endl;
        cout<<"Enter new UserName = ";
        cin>>NewUsername;
        cout<<"Enter new pin";
        cin>>NewPin;
       clrscr();
        cout<<"UserName = ";
        cin>>UserName;
        cout<<"Pin = ";
        cin>>Pin;
        clrscr();
        if((UserName==NewUsername)&&(Pin==NewPin))
        {
            cout<<"Welcome";
            cout<<endl;
            cout<<"Windows 7";
        }
        else
        {
            cout<<"Your Computer has been locked";
        }
    }
}
int main()
{
    string UserName;
    int Pin;
    cout<<"UserName  = ";
    cin>>UserName;
    cout<<"Pin = ";
    cin>>Pin;
    clrscr();
    login(UserName,Pin);
}

