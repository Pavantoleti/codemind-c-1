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
    int a,b;
    scanf("%d%d",&a,&b);
    int min=10000;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                c=1;
            }
        }
    }
    if(c==1)
    printf("%d",min);
    if(c==0)
    {
        printf("-1");
    }
}