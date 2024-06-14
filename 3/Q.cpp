#include<iostream>
using namespace std;
int main()
{
    int T,i,j;
    long long N,temp,rev,r;
    cin>>T;

    for(i=1;i<=T;i++)
    {
        cin>>N;
        rev=0;
      while(N!=0)
    {
        r = N%10;
        rev = rev*10+r;
        N=N/10;

    }

    cout<<rev<<" "<<endl;


    }







}

