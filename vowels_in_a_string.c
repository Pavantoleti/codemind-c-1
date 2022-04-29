#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    char se[3];
    scanf("%s",&se);
    int i,c=0,ind=0;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]==se[0])
        {
            c=1;
            ind=i;
            break;
        }
    }
    if (c==1)
    {
        printf("True
");
        printf("%d",ind);
    }
    else
    {
        printf("False");
    }
    return 0;
}