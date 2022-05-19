#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<n-1;i++)
    {
        printf("%d",i);
    }
    for(int i=1;i<n-2;i++)
    {
        printf("%d",i);
    }
    printf("
");
    }
    
}