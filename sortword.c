#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int i,j;
	char *temp;
	
	for(i = 1; i <= (argc-1); i++)
	{
		for(j = 1; j <= (argc-2-i); j++)
		{
			if(strlen(argv[j]) > strlen(argv[j+1]))
			{
				temp = argv[j];
				argv[j] = argv[j+1];
				argv[j+1] = temp;
			}
		}
	}
	
	for(i = 1; i < argc ;i++ )
	{
		printf("%s\n",argv[i]);
	}

}
