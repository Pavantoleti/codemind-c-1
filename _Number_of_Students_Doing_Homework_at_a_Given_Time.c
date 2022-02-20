#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m],j;
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>=a[i]&&k<=b[i])
        c++;
    }
    printf("%d",c);
}