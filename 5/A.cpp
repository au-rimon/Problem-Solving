#include<iostream>
using namespace std;
int main()
{

    long long N;
    cin>>N;
    long long A[N],sum=0,i;

    for(i=0;i<N;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }

    if(sum<0)
    {
        cout<<(-sum);
    }
    else
    {
        cout<<sum;
    }

}

