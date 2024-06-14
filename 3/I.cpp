#include<iostream>
using namespace std;
int main()
{
    long long N,temp,reverse=0;
    cin>>N;

    temp=N;

    while(temp!=0)
    {
        int r = temp%10;
        reverse = reverse*10+r;
        temp=temp/10;
    }

    cout<<reverse<<endl;

    if(N==reverse)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }


}
