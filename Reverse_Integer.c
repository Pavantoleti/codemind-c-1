#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int flag=0;
    if (a<0)
    {
        flag=1;
        a*=-1;
    }
    int rev=0,r;
    while (a>0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
    }
    if (flag==1)
    {
        printf("%d",rev*-1);
    }
    else
    {
        printf("%d",rev);
    }
    return 0;
}