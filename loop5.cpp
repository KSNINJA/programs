#include<iostream>
using namespace std;


void pattern(int rows)
{
    int iteratorrows=1;
    int x=rows;
    while(iteratorrows<=rows)
    {
        int iteratorcolumns=1;
        while(iteratorcolumns<=x)
        {
            cout<<"*";
            iteratorcolumns=iteratorcolumns+1;
        }

        iteratorrows=iteratorrows+1;
        x=x-1;
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
