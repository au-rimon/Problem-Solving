#include<iostream>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
{
   if(A<B && A<C)
    {
        cout<<A<< " ";
    }

    else if(A>B && B<C)
    {
        cout<<B<< " ";
    }

    else
    {
        cout<<C<< " ";
    }
}

{
     if(A>B && A>C)
    {
        cout<<A;
    }

    else if(A<B && B>C)
    {
        cout<<B;
    }

    else
    {
        cout<<C;
    }
}



}


