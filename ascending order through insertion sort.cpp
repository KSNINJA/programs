#include<iostream>
using namespace std;

int main()
{
    int array[100];
    int TotalInputs;
    cout<<"Enter how many you want to input(MAX 100) = ";
    cin>>TotalInputs;
    int iterator=0;
    int iterator2;
    while(iterator<TotalInputs)
    {
        cin>>*(array+iterator);
        iterator++;
    }
    iterator=0;
    while(iterator<(TotalInputs-1))
    {
        iterator2=iterator;

        while(array[iterator+1]<array[iterator]&&(iterator>=0))
              {
                  swap(*(array+(iterator+1)),*(array+iterator));
                  iterator--;
              }
        iterator=++iterator2;


    }
    iterator=0;
    while(iterator<TotalInputs)
    {
        cout<<endl<<*(array+iterator);
        iterator++;
    }
}
