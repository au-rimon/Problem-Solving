#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char name[20];
    cin>>name;

    float fixed_salary,total_sales,result;

    cin>>fixed_salary>>total_sales;

    result=fixed_salary + (total_sales * 0.150);


    cout<<fixed<<setprecision(2)<< "TOTAL = R$ "<<result<<endl;
}
