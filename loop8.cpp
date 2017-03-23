#include<iostream>
using namespace std;

void pattern(int rows)
{
    int iteratorrows=1;
    int x=1;

    int y=(rows*2)-1;
    while(iteratorrows<=rows)
    {

        int iteratorspaces=1;
        while(iteratorspaces<x)
        {

        cout<<" ";
        iteratorspaces=iteratorspaces+1;

        }
        int iteratorcolumns=1;

        while(iteratorcolumns<=y)
        {
            cout<<"*";
            iteratorcolumns=iteratorcolumns+1;
        }




        y=y-2;
        x=x+1;
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






















