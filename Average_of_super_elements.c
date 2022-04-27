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
    int sum=0,c=0;
    double avg;
    for (i=0; i<a; i++)
    {
        int count=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
        if (count==arr[i])
        {
            sum+=arr[i];
            c++;
        }
    }
    if (c==0)
    {
        printf("-1");
    }
    else
    {
        avg=sum*1.0/c;
        printf("%.2lf",avg);
    }
    return 0;
}