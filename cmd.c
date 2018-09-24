#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int i;
	printf("argc = %d\n",argc);
	for(i = 0;i < argc; i++)
	{
		printf("string value of argv[%d] = %c\n",i,*argv[i]);
		printf("address of argv[%d] = %p\n",i,&argv[i]);
		
		printf("interger value of argv[%d] = %f\n",i,atof(argv[i]));
		printf("\n");
	}
}
