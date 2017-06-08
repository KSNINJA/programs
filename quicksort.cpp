#include<iostream>
using namespace std;
void func(int array[],int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int j=low;
    int i=low-1;
    while(j<high)
    {
        if(*(array+high)>*(array+j))
        {
            i++;
            swap(*(array+i),*(array+j));
        }
        j++;
    }
    swap(*(array+high),*(array+i+1));
    func(array,low,i);
     func(array,i+2,high);
}
int main()
{
    int array[10];
    for(int iterator=0;iterator<10;iterator++)
    {
        cin>>*(array+iterator);
    }
    int low=0;
    int high=9;
    func(array,low,high);
    int iterator=0;
    while(iterator<10)
    {
        cout<<*(array+iterator);
        iterator++;
    }
}
