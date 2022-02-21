#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]s",a);
    int i,c=0;
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    int c1=0,c2=0,count=0;
    for(i=0;i<c;i++)
    {
        if(a[i]=='R')
        {
            c1++;
        }
        else if(a[i]=='L')
        {
            c2++;
        }
        if(c1==c2)
        {
            count++;
        }
    }
    printf("%d",count);
}