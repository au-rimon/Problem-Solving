#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int first = N/10;
    int reminder = N%10;

    if(first!=0 && reminder!=0)
    {
        if(first % reminder == 0 ||reminder % first == 0 && reminder!=0)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
    }
    else
    {
        cin>>N;
    }

}
