#include<stdio.h>
int main()
{
    long int a,b,r,c=0;
    scanf("%ld",&a);
    b=a;
    while(a>0)
    {
        c++;
        a=a/10;
    }
    if(c==10)
    {
        if(b/1000000000==0)
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
    }
    else
    {
        printf("Invalid");
    }
}