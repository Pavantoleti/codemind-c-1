#include<stdio.h>
int co(int n)
{
        int c=0;
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        n*=-1;
    }
    while (n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(co(arr[i])==k)
        {
            count++;
        }
    }
    printf("%d",count);
}