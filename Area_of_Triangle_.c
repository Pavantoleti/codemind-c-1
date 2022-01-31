#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    if(a>1&&a<1000&&b>1&&b<1000&&c>1&&c<1000)
    {
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.2f",area);
    }
    
}