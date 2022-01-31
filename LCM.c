#include<stdio.h>
int main()
{
    int temp,a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}