#include<iostream>
using namespace std;
/*
int add(int*firstno,int*secondno)
{
   return *firstno+*secondno;
}



int main()
{
    int a;
    int b;
    cout<<"enter a no. = ";
    cin>>a;
    cout<<"enter another no. = ";
    cin>>b;
    int*firstno=&a;
    int*secondno=&b;
    int x=add(firstno,secondno);
    cout<<x;
}
*/
int main()
{
    int a=2;
    void *b =&a;
    cout<<*b;
}
