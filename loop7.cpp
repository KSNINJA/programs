#include<iostream>
using namespace std;


void pattern(int rows)
{
    int x=rows;
    int iteratorrows=1;
    int y=x;
    while(iteratorrows<=rows)
    {
        int iteratorcolumns=1;
        int b=0;
        while(iteratorcolumns<=x)
        {
            int a=y-b;
            b=b+1;
            cout<<a;
            iteratorcolumns=iteratorcolumns+1;

        }

        y=y-1;
        x=x-1;
        iteratorrows=iteratorrows+1;
        cout<<endl;
    }






}



int main()
{
    int rows;
    cout<<"Enter no. of rows = ";
    cin>>rows;
    pattern(rows);
}
