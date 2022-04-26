#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x||arr[i]>y)
        {
            sum++;
            printf("%d ",arr[i]);
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
}