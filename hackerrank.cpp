#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int array[5];
    int i=0;
    while(i<5)
        {
        cin>>*(array+i);
        i++;
    }
    i=1;
   long long int CurrentMinimum=*(array+0);
    int    currentminimumindex=0;
    while(i<5)
        {
                if(*(array+i)<CurrentMinimum)
            {
            CurrentMinimum=*(array+i);
            currentminimumindex=i;
        }
        swap(*(array+0),*(array+currentminimumindex));
        i++;
    }



    i=1;
    long long int totalmax=0;
  while(i<5)
      {
      totalmax=totalmax+*(array+i);
      i++;
  }

    i=1;
long long int CurrentMaximum=*(array+0);
    int currentmaximumindex=0;
    while(i<5)
        {
        if(*(array+i)>CurrentMaximum)
            {
     CurrentMaximum=*(array+i);
          currentmaximumindex=i;
    }


        i++;
    }
    swap(*(array+0),*(array+currentmaximumindex));
    i=1;
long long int totalmin=0;
  while(i<5)
      {
      totalmin=totalmin+*(array+i);
      i++;
  }
    cout<<totalmin<<" "<<totalmax;
    return 0;
}
