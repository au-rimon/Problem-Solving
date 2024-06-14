#include<iostream>
using namespace std;

int main()
{
    long long N,M,last1,last2,sum;
    cin>>N>>M;

    last1 = N%10;
    last2 = M%10;

    sum=last1+last2;

    cout<<sum;



}
