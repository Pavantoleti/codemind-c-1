#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 int c=0,b,i,j,temp,count=0;
 temp=a;
 while(temp>0)
 {
     c++;
     temp=temp/10;
 }
 int arr[c];
 temp=a;
 for(i=0;i<c;i++)
 {
     b=temp%10;
     arr[i]=b;
     temp=temp/10;
 }
 for(i=0;i<c;i++)
 {
     for(j=0;j<c;j++)
     {
         if(i!=j)
         {
             if(arr[i]==arr[j])
             {
                 count++;
                 break;
             }
         }
     }
 }
 if(count==0)
 {
     printf("Unique Number");
 }
 else
 {
     printf("Not Unique Number");
 }
}