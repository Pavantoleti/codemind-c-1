#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    int sum=0,avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}