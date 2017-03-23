#include<iostream>
using namespace std;

void pattern(int rows)
{
    int x=1;

    int iteratorrows=1;
    while(iteratorrows<=rows)
    {

        int iteratorcolumns=1;
        int a=0;

        while(iteratorcolumns<=x)
        {
            int y=x+a;
            cout<<y;
            iteratorcolumns=iteratorcolumns+1;
            a=a+1;
        }


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
