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
    int array2[10];
    iterator=0;
    int iterator2=9;
    while(iterator<10)
    {
        *(array2+iterator2)=*(array+iterator);
        cout<<*(array+iterator2);
        iterator++;
        iterator2--;
    }
}
