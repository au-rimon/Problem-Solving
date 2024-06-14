#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    long long max=0;
    for(int i=1;i<=N;i++)
    {
        long long X;
        cin>>X;


        if(max<X)
        {
            max = X;
        }


    }
    cout<<max;
}
