#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,s,a,i;
    scanf("%lf%lf%lf",&p,&r,&t);
    s=1+(r/100);
    a=pow(s,t);
    i=(p*a);
    printf("%.2lf",i);
}