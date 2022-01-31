#include<stdio.h>
int main()
{
    int n,s=0,q,r;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(q%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}