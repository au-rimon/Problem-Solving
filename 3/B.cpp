#include<iostream>
using namespace std;
int main()
{
    long long N;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
           cout<<i<<endl;

        }
       else
        {
            if(N<=1)
            {
                cout<< "-1" <<endl;
            }
        }
    }


}

