#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int even=0,odd=0,positive=0,negative=0;

    for(int i=1;i<=N;i++)
    {
        int X;
        cin>>X;

        if(X%2==0)
        {
           even++;
        }
       else
        {
            odd++;
        }
        if(X>0)
        {
           positive++;
        }
        else if(X<0)
        {
           negative++;
        }
    }

    cout<< "Even: "<<even<<endl;
    cout<< "Odd: "<<odd<<endl;
    cout<< "Postive: "<<positive<<endl;
    cout<< "Negative: "<<negative<<endl;


}


