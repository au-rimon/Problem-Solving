#include<iostream>
using namespace std;
int main()
{
    int T;
    long long X,Y,i,j,sum;
    cin>>T;

    for(i=1;i<=T;i++)

    {
        cin>>X>>Y;

        sum=0;
        if(X>Y)
        {
            swap(X,Y);
        }
        for(j=X+1;j<Y;j++)
        {
            if(j%2!=0)
            {
              sum = sum+j;
            }
        }
        cout<<sum<<endl;




    }

}

