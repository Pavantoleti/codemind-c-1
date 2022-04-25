#include<stdio.h>
int main()
{
    int c=0;
    float a;
    scanf("%f",&a);
    for(int i=0;i<a/2;i++)
    {
        if(i*i==a)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}