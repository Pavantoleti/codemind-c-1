#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(prime(arr[i])==1)
        {
            c++;
            sum+=arr[i];
        }
    }
    float a=(sum*1.0)/c;
    printf("%.2f",a);
}
