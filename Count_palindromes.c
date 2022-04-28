#include<stdio.h>
int rev(int n)
{
    int r,re=0;
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
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==rev((arr[i])))
        c++;
    }
    printf("%d",c);
}