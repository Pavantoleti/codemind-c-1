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
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=0,i;
    for (i=1; i<=1000; i++)
    {
        if (prime(a+b+i)==1)
        {
            res=i;
            break;
        }
    }
    printf("%d",res);
    return 0;
}