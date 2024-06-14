#include<stdio.h>
int main()
{
    long long x,y,summation,multiplication,substraction;
    scanf("%lld %lld",&x,&y);

    summation = x+y;
    multiplication = x*y;
    substraction = x-y;

    printf("%lld + %lld = %lld\n",x,y,summation);
    printf("%lld * %lld = %lld\n",x,y,multiplication);
    printf("%lld - %lld = %lld",x,y,substraction);



}
