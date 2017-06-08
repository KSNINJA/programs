#include<iostream>
using namespace std;
int main()
{
    int NoOfLettersIn1stArray;
    string FirstWord;
    cout<<"Enter no. of letters of first array and then enter the word = ";
    cin>>NoOfLettersIn1stArray>>FirstWord;
    int NoOfLettersIn2ndArray;
    string SecondWord;
    cout<<"Enter no. of letters of second array and then enter the word = ";
    cin>>NoOfLettersIn2ndArray>>SecondWord;
    int Alphabet1[26]={0};
    int Alphabet2[26]={0};
    int i=0;
    while(i<NoOfLettersIn1stArray)
    {
        char CurrentLetterIn1stArray=FirstWord[i];
        char CurrentLetterIn2ndArray=SecondWord[i];
        int x=(int)CurrentLetterIn1stArray;
        int y=(int) CurrentLetterIn2ndArray;
       ( *(Alphabet1+(x-97)))++;
        (*(Alphabet2+(y-97)))++;
        i++;

    }
    i=0;
    int x=0;
    while(i<26)
    {
        if(Alphabet1[i]!=Alphabet2[i])
        {
            x=1;
        cout<<"The Words are not a anagram of each other";
        break;
        }
        i++;
    }
    if(x==0)
    {
        cout<<"This is a anagram of each other";
    }

}
