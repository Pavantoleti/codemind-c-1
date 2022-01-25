#include<stdio.h>
int main()
{
    int n,sum=0,multi=1,r,o;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        multi=multi*r;
    }
    o=multi-sum;
    printf("%d",o);
    return 0;
}