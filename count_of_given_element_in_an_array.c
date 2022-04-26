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
    int s;
    scanf("%d",&s);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            c++;
        }
    }
    printf("%d",c);
}