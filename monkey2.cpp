#include<iostream>
using namespace std;


int main()
{
    int h,m,n;
    cout<<"Enter the height of pole = ";
    cin>>h;
    cout<<"Enter the no. of steps taken by monkey at once = ";
    cin>>m;
    cout<<"Enter the no. of steps slided by monkey = ";
    cin>>n;
    int steps=0;
    int current=0;
    while(current<h)
    {
        current=current+m;
        steps++;
        if(current<h)
        {
            current=current-n;
        }
    }
    cout<<"Total no. of steps taken by monkey = "<<steps;
}
