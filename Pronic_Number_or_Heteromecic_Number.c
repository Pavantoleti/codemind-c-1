#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[100],i;
    for (i=0; i<100; i++)
    {
        arr[i]=i*(i+1);
    }
    int flag=0;
    for (i=0; i<100; i++)
    {
        if (arr[i]==a)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}