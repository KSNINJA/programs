#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int  *array =new int [n];
int i=0;
while(i<n)
{
cin>>*(array+i);
i++;
}
i=1;
int currentmaximum=*(array+0);
int currentmaximumindex=0;
while(i<n)
{
if(*(array+i)>currentmaximum)
{
currentmaximum=*(array+i);
currentmaximumindex=i;
}
i++;
}
swap(*(array+0),*(array+currentmaximumindex));

i=1;
int finalanswer=1;
while(i<n)
{
if((*(array+i))==(*(array+0)))
{
finalanswer++;
}
i++;
}
cout<<finalanswer;
return 0;
}
