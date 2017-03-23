#include<iostream>
using namespace std;

void prime(int number)
{
    int x=2;
    int no=1;
    while (x<=number)
    {
        if(number%x==0)
        {
            no=no+1;
        }
        if(no==3)
        {
            cout<<"The number entered is composite";
            return;
        }


        x=x+1;
    }
      if(no==2)
        {
            cout<<"The number entered is prime";
        }
}


int main()
{
    int number;
    cout<<"Enter a number = ";
    cin>>number;
    prime(number);
}
