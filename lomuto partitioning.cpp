#include<iostream>
using namespace std;


int main()
{
    int array[10];
    int iterator=0;
    int totalno=10;
    cout<<"Enter 10 numbers = ";
    while(iterator<totalno)
    {
        cin>>*(array+iterator);
        iterator++;
    }
    int i=-1;
    int h=totalno-1;
    int j=0;
    while(j<=totalno-1)
    {
        if(*(array+j)<=*(array+h))
        {
            i++;
            swap(*(array+j),*(array+i));
        }
        j++;
    }
    swap(*(array+i+1),*(array+h));
    iterator=0;
    while(iterator<totalno)
    {
        cout<<*(array+iterator);
        iterator++;

    }

}
