#include<iostream>
using namespace std;




void pattern1(int rows,int a)
{
    int iteratorrows=1;
    int b=a;
    int c=1;
    int d=rows-1;
    int e=1;
    while(iteratorrows<=a)
    {
        int iteratorspaces1=1;
        while(iteratorspaces1<b)
        {
            cout<<" ";
            iteratorspaces1=iteratorspaces1+1;
        }

        int iteratorstars1=1;
        while(iteratorstars1<=c)
        {
            cout<<"*";
            iteratorstars1=iteratorstars1+1;
        }
        int iteratorspaces2=1;
        while(iteratorspaces2<=d)
        {
            cout<<" ";
            iteratorspaces2=iteratorspaces2+1;
        }
        int iteratorstars2=1;
        while(iteratorstars2<=e)
        {
            cout<<"*";
            iteratorstars2=iteratorstars2+1;
        }

        e=e+2;
        d=d-2;
        c=c+2;
        b=b-1;
        iteratorrows=iteratorrows+1;
        cout<<endl;
    }
}

void pattern2(int f,int rows)
{
    int x=1;
    int y=rows-2;
    int iteratorrows=1;
    int z=2;
    int h=rows-2;
    while(iteratorrows<=f)
    {
        int iteratorspaces1=1;
        while(iteratorspaces1<=x)
        {
            cout<<" ";
            iteratorspaces1=iteratorspaces1+1;
        }




    int iteratorstars1=1;
    while(iteratorstars1<=y)
    {
        cout<<"*";
        iteratorstars1=iteratorstars1+1;
    }
    int iteratorspaces2=1;
    while(iteratorspaces2<=z)
    {
        cout<<" ";
        iteratorspaces2=iteratorspaces2+1;
    }
    int iteratorstars2=1;
    while(iteratorstars2<=h)
    {
        cout<<"*";
        iteratorstars2=iteratorstars2+1;
    }
        h=h-2;
        z=z+2;
        y=y-2;
        x=x+1;
        cout<<endl;
        iteratorrows=iteratorrows+1;
    }
}

void diamond()
{
      int rows;
    cout<<"Enter no. of rows = ";
    cin>>rows;
    if(rows%2==1)
    {
    int a=rows/2+1;
    pattern1(rows,a);
    int f=rows-a;
    pattern2(f,rows);
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
