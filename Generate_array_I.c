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
    for (i=0; i<a; i+=2)
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