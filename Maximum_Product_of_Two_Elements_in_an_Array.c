#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((a[i]-1)*(a[j]-1)>max)
                {
                    max=(a[i]-1)*(a[j]-1);
                }
            }
        }
    }
    printf("%d",max);
}