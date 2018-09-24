#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int histogram(int *x,int argc)
{
	int i,r,k;
	r = 0;
	i = 0;
	while(i < argc)
	{
		k = 1;
		printf("%d - %d |\t",r, r + 9);
		while(k < argc)
		{
			if ((x[k] <= (r+9)) && (x[k] >= r))
				printf("*");
			k++;
		}
		printf("\n");
		r += 10;
		if(r >=100)
			break;
		i++;
	}
}

int main(int argc,char *argv[])
{
	if(argc == 1 )
	{
		printf("enter student marks in command line\n");
	}
	else
	{
		int i,x[argc];
		for(i = 0;i < argc; i++)
		{
			x[i] = atoi(argv[i]);
		}
		histogram(x,argc);
	}
}
