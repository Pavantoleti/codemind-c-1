#include<stdio.h>
int main()
{
    float n,i,a,c=0;
    scanf("%f",&n);
    for(i=1;i<n;i++)
    {
        a=n/i;
        if(a==i)
        {
           printf("True");
           c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    return 0;
}