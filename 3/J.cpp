#include <iostream>
using namespace std;

int main()
{
    long long N,X;
    int count;
    cin>>N;

    for(int i=2;i<=N;i++)
    {
        count=0;

        for(int j = 2; j<i;j++)
    {
        if(i%j==0)
        {
            count++;
            break;

        }

    }

    if(count==0)
    {
        cout<<i<< " ";
    }
    continue;

    }
}
