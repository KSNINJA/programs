#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int iterator=0;
    while(iterator<10)
    {
        cin>>*(array+iterator);
        iterator++;
    }
    iterator=9;
    while(iterator>=0)
    {
        cout<<*(array+iterator);
        iterator--;
    }
}
