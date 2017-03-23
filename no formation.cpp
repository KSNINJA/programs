#include<iostream>
using namespace std;

void no(int number)
{
    int a=1;
    int current=0;
    int x=number;
    while(current!=number)
    {
        int digit=x%10;
        current=current*1+digit*a;
        a=a*10;
        x=x/10;
    }
    cout<<current;
}

int main()
{
    int number;
    cout<<"Enter a no. = ";
    cin>>number;
    no(number);
}
