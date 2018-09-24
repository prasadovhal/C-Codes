#include<stdio.h>

int binary(int n)
{
	int b[50],i=0;
	while(n != 1)
	{
		b[i] = n % 2;
		n = n/2;
		i++;
	}
	b[i] = 1;
	int j = i;
	for(i = j;i >=0;i--)
	{
		printf("%d",b[i]);
	}
	printf("\n");
}

int hexa(int n)
{
	char a[6] = {'A','B','C','D','E','F'};
	int b[50],i=0;
	while(n != 0)
	{
		b[i] = n % 16;
		n = n/16;
		i++;
	}

	int j = i - 1;
	for(i = j;i >=0;i--)
	{
		if(b[i] > 9)
			printf("%c",a[b[i]%10]);
		else
			printf("%d",b[i]);
	}
	printf("\n");
}

int octal(int n)
{
	int b[50],i=0,j;
	while(n != 0)
	{
		b[i] = n % 8;
		n = n/8;
		i++;
	}
	j = i-1;
	for(i = j;i >=0;i--)
	{
		printf("%d",b[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	
	binary(n);
	hexa(n);
	octal(n);
}
