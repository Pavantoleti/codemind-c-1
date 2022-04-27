#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    if (a%2!=0)
    {
        printf("0");
    }
    return 0;
}