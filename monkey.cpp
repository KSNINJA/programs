#include<iostream>
using namespace std;

int func(int array[],int currentposition)
{
    int a=0;
    int b=0;
    if(currentposition<4)
    {
        a=func(array,currentposition+2);
    }
    if(currentposition<3)
    {
        b=func(array,currentposition+3);
    }
    return *(array+currentposition)+max(a,b);
}

int main()
{
    int array[6];
    int i=0;
    while(i<6)
    {
        cin>>*(array+i);
        i++;
    }
    int currentposition=0;
    int c=func(array,currentposition);
    cout<<c;
}

