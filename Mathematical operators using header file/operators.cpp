#include<iostream>
using namespace std;
#include"arithmetic.h"
int main()
{
    float a;
    float b;
    cout<<"Enter a no.";
    cin>>a;
    cout<<"Enter a another no.";
    cin>>b;
    float c=add(a,b);
    cout<<c;
}
