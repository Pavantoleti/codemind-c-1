#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=0; i<a; i++)
    {
        if (prime(arr[i])==1)
         c++;
            
        
    }
    printf("%d",c);
    return 0;
}