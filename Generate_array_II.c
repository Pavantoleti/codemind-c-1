#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i+=2)
    {
        int val1=arr[i];
        int val2=arr[i+1];
        for (j=0; j<val2; j++)
        {
            printf("%d ",val1);
        }
    }
    return 0;
}