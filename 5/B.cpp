#include<iostream>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long A[N],X,i;


    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cin>>X;
    int position=0;

    for(i=0;i<N;i++)
    {
        if(A[i]==X)
       {
        position =i;
       }

    }
    if(position==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<position;
    }






}


