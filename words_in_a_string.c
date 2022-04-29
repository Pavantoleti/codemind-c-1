#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int w=1,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]==32)
        {
            w++;
        }
    }
    printf("%d",w);
    return 0;
}