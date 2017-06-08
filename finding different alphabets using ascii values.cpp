#include<iostream>
using namespace std;


int main()
{
    int AlphabetArray[26]={0};
    int TotalCharacters;
    cout<<"Enter total no. of characters = ";
    cin>>TotalCharacters;
    string word;
    int iterator=0;
    cout<<"Enter the string = ";
        cin>>word;
    while(iterator<TotalCharacters)
    {
        int CurrentAlphabet=word[iterator];
        int x=CurrentAlphabet-97;
        *(AlphabetArray+x)=*(AlphabetArray+x)+1;
        iterator++;
    }
iterator=0;
int a=97;
while(iterator<26)
{
    cout<<char(a)<<" = "<<*(AlphabetArray+iterator)<<endl;
    iterator++;
    a=a+1;

}
}
