#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int iterator=0;
    int total=0;
    while(iterator<10)
    {
        cin>>*(a+iterator);
        total=total+*(a+iterator);

        iterator++;
    }
    cout<<total;
}
