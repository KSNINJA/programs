#include<iostream>
using namespace std;

void prime(int number)
{
    int no=2;
    while(no!=number)
    {
    int a=2;
    int x=0;
    while(a<=no/2)
    {
        if(no%a==0)
        {
            x=x+1;
            break;
        }

        a=a+1;
    }
    if(x==0)
    {
        cout<<no;
        cout<<endl;
    }
     no=no+1;
    }
}


int main()
{
    int number;
    cout<<"Enter a number = ";
    cin>>number;
    prime(number);
}
