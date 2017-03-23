#include<iostream>
using namespace std;




void triangle(int a)
{
    int iteratorrows=1;
    int x=a;
    int y=1;
    while(iteratorrows<=a)
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

void invertedtriangle(int b,int rows)
{
    int iteratorrows=1;
    int x=1;
    int y=rows-2;

    while(iteratorrows<=b)
    {
        int iteratorspaces=1;

        while(iteratorspaces<=x)
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


        y=y-2;
        x=x+1;
        iteratorrows=iteratorrows+1;
        cout<<endl;
    }


}
void diamond()
{

int rows;
cout<<"Enter no. of rows = ";
 cin>>rows;
    if(rows%2==1)
       {



    int a=(rows/2)+1;
    triangle(a);
    int b=a-1;
   invertedtriangle(b,rows);
       }
       else
       {
           cout<<"Enter only odd no. of rows";
           cout<<endl;
           diamond();
       }

}






int main()
{
    diamond();
}
