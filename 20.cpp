#include<iostream>
using namespace std;

int main()
{
    long long A,B,C;
    cin>>A>>B>>C;

    int i,j;

    for(i=0;i<2;i++)
    {
        if(A>B && A>C)
        {
            cout<<A<<endl;
        }
        if(A<B && B>C)
        {
            cout<<B<<endl;
        }
        if(C>B && A<C)
        {
            cout<<C;
    }
    }
}

