#include<stdio.h>
int main()
{
    long int n,i,sum=0;
    scanf("%ld",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}