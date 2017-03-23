#include<iostream>
using namespace std;


void pattern(int rows,int columns)
{
    int iteratorrows=1;
    while(iteratorrows<=rows)
    {
        int iteratorcolumns=1;
        while(iteratorcolumns<=columns)
        {
            cout<<"*";
            iteratorcolumns=iteratorcolumns+1;
        }



        iteratorrows=iteratorrows+1;
        cout<<endl;
    }
}


int main()
{
    int rows;
    int columns;
    cout<<"Enter no. of rows = ";
    cin>>rows;
    cout<<"Enter no. of columns = ";
    cin>>columns;
    pattern(rows,columns);
}
