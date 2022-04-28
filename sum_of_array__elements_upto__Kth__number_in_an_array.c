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
    int k;
    scanf("%d",&k);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]==k)
        {
            break;
        }
    }
    printf("%d",sum);
}