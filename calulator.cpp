#include<iostream>
using namespace std;

int main()
{
    string operato;
    int number;
    cin>>number;
    int total=number;
    cin>>operato;
    for(int i=0;i<9999999&&operato!="end";i++)
    {
        cin>>number;
        if(operato=="+")
        {
            total=total+number;
        }
        else if(operato=="-")
        {
            total=total-number;
        }
        else if(operato=="*")
        {
            total=total*number;
        }
        else if(operato=="/")
        {
            total=total/number;
        }
           cout<<"total = "<<total<<endl;
           cin>>operato;
    }

}
