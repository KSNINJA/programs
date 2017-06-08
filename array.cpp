#include<iostream>
using namespace std;
int main()
{
    int a[10];//array
    int number;//the no. to be checked
    int iterator=0;
    cout<<"Enter 10 no.s";
    while(iterator<10)//input
    {
        cin>>*(a+iterator);
        iterator=iterator+1;
    }
    cout<<"Enter a no. which you want to search";
    cin>>number;
    int iterator1=0;//for getting the value at different address
    int y=0;
    while(iterator1<10)
    {
        if(*(a+iterator1)==number)
        {
            cout<<number;
            y=1;
            break;
        }
        iterator1++;
    }
    if(y==0)
    {
        cout<<"THe no.does not exist";
    }
}
