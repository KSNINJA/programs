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
    iterator=0;
    int iterator2=9;
    while(iterator<iterator2)
    {
        swap(*(array+iterator2),*(array+iterator));
        iterator++;
        iterator2--;
    }
    iterator=0;
    while(iterator<10)
    {
        cout<<*(array+iterator);
        iterator++;
    }
}
