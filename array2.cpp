#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int iterator=0;
    while(iterator<10)
    {
        cin>>*(a+iterator);
        iterator=iterator+1;
    }
    int iterator2=0;
    int total=0;
    while(iterator2<9)
    {
        if(*(a+iterator2)>*(a+iterator2+1))
           {
               total=total+1;
           }
           iterator2=iterator2+1;
    }
    cout<<total;
}
