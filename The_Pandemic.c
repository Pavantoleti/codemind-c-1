#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=1)
    {
        printf("0");
    }
    else if(a==2)
    {
        printf("1");
    }
    else if(a>2)
    {
        printf("2");
    }
}