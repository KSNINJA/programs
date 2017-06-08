#include<iostream>
using namespace std;

int main()
{
    int array[100];
    cout<<"Enter total no.s you want to input (MAX 100 )= ";
    int TotalInputs;
    cin>>TotalInputs;
    int iterator=0;
    while(iterator<TotalInputs)
    {
        cin>>*(array+iterator);
        iterator++;
    }
    iterator=0;
    while(iterator<(TotalInputs-1))
    {
        int iterator2=iterator+1;
        int current=*(array+iterator);
        int minimumindex=iterator;
        while(iterator2<TotalInputs)
        {
            if(current>*(array+iterator2))
            {
                current=*(array+iterator2);
                minimumindex=iterator2;
            }
            iterator2++;
        }
        swap(*(array+iterator),*(array+minimumindex));
        iterator++;
    }
 iterator=0;
 while(iterator<TotalInputs)
 {
     cout<<*(array+iterator);
     iterator++;
 }
}

