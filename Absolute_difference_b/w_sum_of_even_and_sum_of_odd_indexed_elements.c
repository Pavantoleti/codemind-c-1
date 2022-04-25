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
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            o+=arr[i];
        }
        else
        {
            e+=arr[i];
        }
    }
    int d;
    if(o>e)
    {
        d=o-e;
    }
    else
    {
        d=e-o;
    }
    printf("%d",d);
}