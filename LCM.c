#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int lcm=1;
    while (1)
    {
        if (lcm%a==0 && lcm%b==0)
        {
            break;
        }
        else
        {
            lcm++;
        }
    }
    printf("%d",lcm);
    return 0;
}