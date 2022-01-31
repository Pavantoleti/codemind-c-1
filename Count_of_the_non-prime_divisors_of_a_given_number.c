#include<stdio.h>
int main()
{
    int n,k,i,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(k=2;k<=i/2;k++)
            {
                if(i%k==0)
                {
                c++;
                break;
                }
            }
        }
    }
    printf("%d",c);
}