#include<iostream>
using namespace std;


int main()
{
    int totalsoldiers;
    int afterfoodlast;
    int totalfood;
    int foodconsumedbytransfered;
    cout<<"Enter total no. soldiers = ";
    cin>>totalsoldiers;
    cout<<"Enter no. of days the food will last = ";
    cin>>totalfood;
    cout<<"After how many days,some soldiers are transfered = ";
    cin>>foodconsumedbytransfered;
    cout<<"Enter the no. of days the food will last now = ";
    cin>>afterfoodlast;
    int soldierstransfered=totalsoldiers-((totalsoldiers*(totalfood-foodconsumedbytransfered))/afterfoodlast);
    cout<<"No. of soldiers transfered = ";
    cout<<soldierstransfered  ;
}
