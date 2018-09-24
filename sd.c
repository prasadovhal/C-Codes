#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc,char *argv[])
{
	int i;
	float sq = 0,sum=0.0,x[argc],mean,b[argc],sd;

	for(i=1;i<argc;i++)
	{
		x[i] = atof(argv[i]);
	}
	
	for(i=1;i<argc;i++)
	{
		sum += x[i];
	}
	
	mean = sum / (argc-1);
	printf("mean = %f\n",mean);

	for(i=1;i<argc;i++)
	{
		b[i] = x[i] - mean;
	}
	
	for(i=1;i<argc;i++)
	{
		sq += b[i] * b[i];
	}
	
	sd = sqrt(sq / (argc-2));
	printf("sd = %f\n",sd);
}
