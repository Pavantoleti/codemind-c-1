#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg;
    avg=sum*(1.0)/n;
    printf("%.2f",avg);
}