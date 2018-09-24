#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int i,j;
	float x[argc],temp;
	for(i = 1; i < argc; i++)
	{
		x[i] = atof(argv[i]);
		//printf("x[%d]=%f\n",i,x[i]);
	}
	
	for(i = 1 ; i < argc; i++)
	{
		j = i;
		while(j > 0 && (x[j-1] > x[j]))
		{
			temp = x[j];
			x[j] = x[j-1];
			x[j-1] = temp;
			j--;
		}
	}
	
	printf("sorted array:\n");
	for(i = 1;i < argc; i++)
	{
	 printf("%f\n",x[i]);
	}
return 0;	
}
