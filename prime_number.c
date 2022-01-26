#include<stdio.h>
int main()
{
    long int no,i,c=0;
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        c++;
    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}