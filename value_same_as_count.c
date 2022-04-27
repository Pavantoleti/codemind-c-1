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
    int c=0,count=0;
    for (i=0; i<a; i++)
    {
        count=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    arr[j]=-1;
                    count++;
                }
            }
        }
        if (count==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}