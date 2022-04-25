#include<stdio.h>
int max(int n)
{
    int r,m=0;
    while(n>0)
    {
        r=n%10;
        if(r>m)
        {
            m=r;
        }
        n=n/10;
    }
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=max(n);
    printf("%d",m);
}