#include<iostream>
using namespace std;
int main()
{
    int T,N,i,j;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>N;

        long long factorial = 1;

        for(j=1;j<=N;j++)
        {
            factorial=factorial*j;
        }
        cout<<factorial<<endl;
    }





}
