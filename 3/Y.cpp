#include<iostream>
using namespace std;

int fib(int N)
{
    if(N<=1)
    {
        return N;
    }
    else
    {
        return fib(N-1)+fib(N-2);
    }
}
int main()
{
    int N;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<fib(i)<< " ";
    }

}


