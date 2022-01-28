#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("0 1 ");
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
}