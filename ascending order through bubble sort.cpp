#include<iostream>
using namespace std;

int function()
{

    int array[10];
    int i=0;
    while(i<10)
    {
        cin>>*(array+i);
        i++;
    }
    i=0;
    while(i<(10-1))
    {
        int i2=0;
        int boolean=0;
        while(i2<9)
        {
            if(*(array+i2)>*(array+i2+1))
            {

            swap(*(array+i2),*(array+i2+1));
            boolean=1;
            }
            i2++;
        }


    if(boolean=0)
    {
        break;
    }
    i++;
    }
    i=0;
     while(i<10)
    {
        cout<<*(array+i)<<" ";
        i++;
    }


}
int main()
{

    function();

}
