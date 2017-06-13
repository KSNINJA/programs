#include<iostream>
using namespace std;

int main()
{
    string TwelveHourSystem;
    cin>>TwelveHourSystem;
    int a=(((int) TwelveHourSystem[0])-48)*10+((int)TwelveHourSystem[1]-48);
    if(a>=1&&TwelveHourSystem[8]=='A')
        {
        int i=0;
        while(i<8)
            {
            cout<<TwelveHourSystem[i];
            i++;
        }
    }
       else if(a>=1&&TwelveHourSystem[8]=='P')
            {
            cout<<a+12;
            int i=2;
            while(i<8)
                {
                cout<<TwelveHourSystem[i];
                i++;
            }
        }
        else if(a==12&&TwelveHourSystem[8]=='A')
            {
            cout<<"00";
            int i=2;
            while(i<8)
                {
                cout<<TwelveHourSystem[i];
                i++;
            }
        }
            else
                {
                cout<<12;
                int i=2;
                while(i<8)
                    {
                    cout<<TwelveHourSystem[i];
                    i++;
                }
            }
        }
