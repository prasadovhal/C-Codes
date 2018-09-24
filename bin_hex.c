#include<stdio.h>
#include<stdlib.h>

int hex(int x)
{
	char a[6] = {'A','B','C','D','E','F'};
	int b[20],i=0,j;
	while(x != 0)
	{
		b[i] = x % 16;
		x = x / 16;
		i++;
	}
	
	j = i - 1;
	printf("hexadecimal are\n");
	for(i = j;i >= 0;i--)
	{
		if(b[i] > 9)
			printf("%c",(a[b[i]%10]));
		else
			printf("%d",b[i]);
	}
	printf("\n");	
}

int binary(int x)
{
	int b[20],i=0,j;
	while(x != 1)
	{
		b[i] = x % 2;
		x = x / 2;
		i++;
	}
	b[i] = 1;
	j = i ;
	printf("binary are\n");
	for(i = j;i >= 0;i--)
	{
		printf("%d",b[i]);
	}
	printf("\n");
}

int main(int argc,char *argv[])
{
	if(argc != 2)
		printf("enter a number in command line\n");
	else
	{
		int x;
		x = atoi(argv[1]);
		binary(x);
		hex(x);
	}
return 0;
}
