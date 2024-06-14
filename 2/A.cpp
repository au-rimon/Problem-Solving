#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double P,price_before_the_discount,X;

    cin>>X>>P;

    price_before_the_discount = P/(1-(X/100));

    cout<<fixed<<setprecision(2)<<price_before_the_discount;

}

