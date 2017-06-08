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
      int total=0;
    while(iterator<10)
    {

        if(*(array+(iterator+1))>*(array+iterator))
        {
            total++;
        }
        iterator++;
    }
    cout<<total;
}
