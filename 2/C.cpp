#include<iostream>
using namespace std;
int main()
{
    char C;
    cin>>C;
    char next;

    if(C=='z')
    {
       next = 'a';
    }

    else
    {
       next = C+1;
    }

    cout<<next;
}
