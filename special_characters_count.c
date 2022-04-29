#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c=0,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            c+=0;
        }
        else if (str[i]>=65 && str[i]<=90)
        {
            c+=0;
        }
        else if (str[i]>=48 && str[i]<=57)
        {
            c+=0;
        }
        else if (str[i]==32)
        {
            c+=0;
        }
        else
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}