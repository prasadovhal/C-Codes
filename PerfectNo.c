#include<stdio.h>
#include<stdlib.h>
#define SIZE 1024

int isFactor(int x)
{
	int sum,i,b[SIZE],j,k = 3;
	while(k <= x)
	{
		sum = 1;
		j = 0;
		for(i = 2;i < x;i++)
		{
			if(k % i == 0)
			{	
				b[j] = i;
				j++;
			}
		}
		for(i = 0 ;i < (j-1);i++)
		{
			sum += b[i];
		}
		if(sum == k)
			printf("%d\n",k);
		k += 1;
	}
}

int main(int argc,char *argv[])
{
	if(argc != 2)
		printf("enter a number on command line\n");
	else
	{
		int x;
		x = atoi(argv[1]);
		isFactor(x);
	}
return 0;
}
