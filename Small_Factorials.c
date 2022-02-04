#include<stdio.h>
int main()
{
    int n,ul;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ul=1;
        for(int j=a[i];j>0;j--)
        {
          ul=ul*j;  
        }
            printf("%d
",ul);
    }
}