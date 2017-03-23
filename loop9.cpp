#include<iostream>
using namespace std;


void pattern(int rows)
{
    int iteratorrows=1;
    int x=rows;
    int y=1;
    while(iteratorrows<=rows)
    {
      int iteratorspaces=1;
      while(iteratorspaces<x)
      {
          cout<<" ";
          iteratorspaces=iteratorspaces+1;

     }
     int iteratorstars=1;

     while(iteratorstars<=y)
     {
         cout<<"*";
         iteratorstars=iteratorstars+1;
     }

        y=y+2;
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


