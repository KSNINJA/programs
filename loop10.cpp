#include<iostream>
using namespace std;

void pattern(int rows)
{
    int iteratorrows=1;
    int x=(rows/2)-0.5;
    while(iteratorrows<=rows)
    {
        int iteratorspaces=1;

        while(iteratorspaces<=x)
        {
            cout<<"a";
            iteratorspaces=iteratorspaces+1;
        }




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
