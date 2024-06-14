#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;

    while(X!=1999)
    {
        cout<< "Wrong"<<endl;
        cin>>X;
    }
    if(X==1999)
    {
        cout<< "Correct";
    }
}


