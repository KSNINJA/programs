#include<iostream>
using namespace std;

void reverse(int number)
{
    int current=0;
    while(number!=0)
    {
        int digit=number%10;
        current=current*10+digit;
        number=number/10;
    }
    cout<<current;
}


int main()
{
    int number;
    cout<<"Enter a no. = ";
    cin>>number;
    reverse(number);
}
