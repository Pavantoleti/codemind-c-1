#include<stdio.h>
int sum(int n)
{
    int su=0,r;
    while(n>0)
    {
        r=n%10;
        su+=r;
        n=n/10;
    }
    return su;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=sum(n);
    if(n%m==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}