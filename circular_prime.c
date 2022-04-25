#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        return 1;
    }
    return 0;
}
int rev(int num)
{
    int s=0,r;
    while (num>0)
    {
        r=num%10;
        s=(s*10)+r;
        num/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    if (prime(a)==1)
    {
        int ar=rev(a);
        if (prime(ar)==1)
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
    return 0;
}