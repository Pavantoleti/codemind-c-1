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
    int su=0,no=0,mid=n/2;
    for(int i=0;i<mid;i++)
    {
        su+=arr[i];
    }
    for(int i=mid;i<n;i++)
    {
        no+=arr[i];
    }
    int d=no-su;
    printf("%d",d);
}