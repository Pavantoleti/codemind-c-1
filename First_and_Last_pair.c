
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid=a/2,con=a%2;
    if (con==0)
    {
        for (i=0; i<mid; i++)
        {
            printf("%d %d ",arr[i],arr[a-i-1]);
        }
    }
    else
    {
        for (i=0; i<mid; i++)
        {
            printf("%d %d ",arr[i],arr[a-i-1]);
        }
        printf("%d %d ",arr[mid],0);
    }
    return 0;
}