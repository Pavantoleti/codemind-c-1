#include<stdio.h>
int rev(int n)
{
    int re=0,r;
    while(n>0)
    {
        r=n%10;
        re=(re*10)+r;
        n=n/10;
    }
    return re;
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
    for(int i=0;i<n;i++)
    {
        printf("%d ",rev(arr[i]));
    }
}