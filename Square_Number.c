#include<stdio.h>
int main()
{
    float q,n,i,c=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        q=n/i;
        if(q==i)
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