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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                arr[j]=-1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
            if(arr[i]%2==0)
            {
                sum+=arr[i];
            }
        }
    }
    printf("%d",sum);
}