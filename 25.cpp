#include<iostream>
using namespace std;
int main()
{
    long long A,B,C,D,Multiplication;
    cin>>A>>B>>C>>D;

    Multiplication=A*B*C*D;

    long long output = Multiplication%100;

    cout<<output;

}
