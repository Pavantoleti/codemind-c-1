#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}