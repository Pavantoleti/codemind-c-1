#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int co=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        co=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j&&arr[i]==arr[j]&&arr[i]!=-1)
            {
                co=1;
                break;
            }
        }
        if(co==0&arr[i]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
}