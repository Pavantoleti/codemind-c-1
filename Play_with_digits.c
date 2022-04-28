#include<stdio.h>
int sod(int num)
{
    int s=0,r;
    while (num>0)
    {
        r=num%10;
        s+=r;
        num/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (i=0; i<a; i++)
    {
        sum+=sod(arr[i]);
    }
    printf("%d",sum);
    return 0;
}