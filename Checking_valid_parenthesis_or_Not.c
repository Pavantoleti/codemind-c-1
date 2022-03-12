#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int c=0,i;
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    if(a[0]==40&&a[c-1]==41)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}