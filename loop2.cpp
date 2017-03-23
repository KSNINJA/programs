#include<iostream>
using namespace std;


void table(int Number)
{
    int x=1;
    while(x<=10)
    {
        int y=Number*x;
        cout<<y;
        x=x+1;
        cout<<endl;
    }
}

int main()
{
    int Number;
    cout<<"Enter a number = ";
    cin>>Number;
    table(Number);
}
