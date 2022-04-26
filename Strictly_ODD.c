#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2!=0 && i%2!=0)
        {
            flag=1;
        }
        else if (arr[i]%2!=0 && i%2==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}