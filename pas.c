#include<stdio.h>

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}


int main()
{
	int n,i,j,b[50];
	printf("enter power\n");
	scanf("%d",&n);
	printf("pascal triangle is\n");
	for(i = 0;i <= n;i++)
	{
		for(j = 0;j <= i;j++)
		{
			b[j] = factorial(i) / (factorial(i-j) * factorial(j));
			printf("%d  ",b[j]);
		}
		printf("\n");
	}
}
