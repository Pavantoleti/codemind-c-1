#include<stdio.h>
int prime_count(int num)
{
	int c=0,i=1;
	for (i; i<=num; i++)
	{
		if (num%i==0)
		{
			c++;
		}
	}
	if (c<=2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n1,n2,choise;
	
	
		printf("1.primality check\n2.primes in range\n3.composites in a range\n");
		printf("\nEnter your choice :");
		scanf("%d",&choise);
		if (choise==1)
		{
			int n;
			printf("\nEnter a number :");
			scanf("%d",&n);
			if (prime_count(n)==1)
			{
				printf("Prime");
			}
			else
			{
				printf(" Not a Prime");
			}
		}
		else if (choise==2)
		{
			printf("\nEnter two values of the range :");
			scanf("%d%d",&n1,&n2);
			for (n1;n1<=n2;n2++)
			{
				if (prime_count(n1)==1)
				{
					printf("%d ",n1);
				}
			}
			printf("\n\n");
		}
		else if (choise==3)
		{
			printf("Enter two values of the range :");
			scanf("%d%d",&n1,&n2);
			for (n1;n1<=n2;n1++)
			{
				if (prime_count(n1)!=1)
				{
					printf("%d ",n1);
				}
			}
			printf("\n\n");
		}
		else
		{
			printf("enter a valied choise\n");
			
		}
	
	
	return 0;
	
}
