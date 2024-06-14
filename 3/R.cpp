#include<iostream>
using namespace std;
int main()
{
    int N,M,i,sum;
    cin>>N>>M;

    while(N>0 && M>0)

    {
        sum=0;
        if(N>M)
        {
            swap(N,M);
        }
        for(i=N;i<=M;i++)
        {
            cout<<i<< " ";
            sum = sum+i;
        }
        cout<< "sum ="<<sum<<endl;

        cin>>N>>M;

    }

}
