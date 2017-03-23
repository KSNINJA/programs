#include<iostream>
using namespace std;

void lcm(int firstnumber,int secondnumber)
{
    float multiple=1;
     int factor=2;
    while((firstnumber!=1)||(secondnumber!=1))
    {
        int k=0;

    if(firstnumber%factor==0)
    {
           firstnumber=firstnumber/factor;
        multiple=multiple*factor;
        k=1;
    }

    if(secondnumber%factor==0)
    {
        secondnumber=secondnumber/factor;
        if(k!=1)
        {
            multiple=multiple*factor;
            k=1;
        }

    }
    if(k==0)
    {
        factor=factor+1;
    }
    }
    cout<<multiple;
}


int main()
{
    int firstnumber;
    int secondnumber;
    cout<<"Enter first number = ";
    cin>>firstnumber;//first number is entered
    cout<<"Enter second number = ";
    cin>>secondnumber;//second number is entered
    lcm(firstnumber,secondnumber);//function-call

}
