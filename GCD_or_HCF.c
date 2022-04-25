#include<stdio.h>
int main()
{
    int a,b,g;
    scanf("%d%d",&a,&b);
    for(int i=1;i<a+1;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}