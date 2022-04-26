#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg,c=0;
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        c++;
    }
    printf("%d",c);
}