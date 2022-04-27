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
    int s,c=0;
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j]&&arr[i]!=-1)
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
        if(count==s)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}