#include<iostream>
using namespace std;

void pattern(int rows)
{
    int iteratorrows=1;
    int x=1;

    while(iteratorrows<=rows)
    {
        int iteratorcolumns=2;
        int z=0;
        while(iteratorcolumns<=x)
        {
            int y=1+z;
            cout<<y;
            iteratorcolumns=iteratorcolumns+1;
            z=z+1;
        }


     cout<<"1";
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
