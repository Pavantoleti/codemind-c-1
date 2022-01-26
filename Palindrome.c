#include<stdio.h>
int main()
{
    signed int t,a,r,rev=0;
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}