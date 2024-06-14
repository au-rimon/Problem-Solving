#include<iostream>
using namespace std;
int main()
{
    long long A,B,i;
    cin>>A>>B;
    int sum=0,n;

    for( i=A;i<=B;i++)
    {
        i=n;

        while(n>=10)
        {
           n=n/10;
        }
        cout<<n;

    }

    if(n==4 || n==7)
        {
            cout<<i<< " ";
        }
        if(i!=4 || i!=7)
        {
            cout<< "-1";

        }

}
