#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a no. = ";
    cin>>number;
    int array[number*2-1];
    int iterator=0;
    while(iterator<(number*2)-1)
    {
        *(array+iterator)=number+1;
      iterator++;
    }
    int y=(number*2)-1;
    for(int i=0;i<number;i++)
    {
        iterator=0;
        while(iterator<y)
        {
            (*(array+iterator+i))--;
            iterator++;
        }
        iterator=0;
        while(iterator<(number*2)-1)
        {
            cout<<*(array+iterator);
            iterator++;
        }
        y=y-2;
        cout<<endl;
    }
    y=1;
    for(iterator=0;iterator<number-1;iterator++)
    {
        int i3=0;
        while(i3<y)
        {
            (*(array+number-1-iterator+i3))++;
            i3++;
        }
        y=y+2;
        int i=0;
        while(i<(number*2)-1)
        {
            cout<<*(array+i);
            i++;
        }
        cout<<endl;
    }

}
