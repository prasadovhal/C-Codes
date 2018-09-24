#include<stdio.h>
#include<stdlib.h>

int mode(float *x,int argc)
{
	int i,j,num,temp = 0;
	float mode;
	for(i = 1;i < argc;i++)
	{
		num = 0;
		for(j = 1;j < argc;j++)
		{
			if(x[i] == x[j])
				num += 1;
			
			if(num > temp)
	        {
	   			mode = x[i];	
	   	 	}  	 
		  temp = num;
		}
	}
printf("mode = %f\n",mode); 
}

int median(float *x,int argc)
{
	float temp,med;
	int i,j;	
	for(i = 1; i <= argc;i++)
	{
		for(j = 1; j <= argc ;j++)
		{
			if(x[j-1] > x[j])
			{
				temp = x[j-1];
				x[j-1] = x[j];
				x[j] = temp;
			}
		}
	}
	
	/*printf("sorted\n");	
	for(i = 1;i < argc;i++)
	{
		printf("%f\n",x[i]);
	}*/
	
	if(argc%2 != 0)
	{
		//printf("%f %f\n",x[(argc/2) + 1],x[(argc/2) - 1]);
		med = (x[(argc+1)/ 2] + x[(argc-1)/ 2]) / 2.0;
	}
	else
	{
		med = x[(argc / 2) ];
	}
	printf("%f\n",med);
}

int mean(float *x,int argc)
{
	float mu,sum = 0;
	int i;
	for(i = 1;i<argc;i++)
	{
		sum += x[i];
	}
	//printf("%f\n",sum);
	mu = sum / argc;
	printf("mean = %f\n",mu);
}

int main(int argc,char *argv[])
{
	int i;
	float x[argc];
	for(i=1;i<argc;i++)
	{
		x[i] = atof(argv[i]);
	}
		
	//mean(x,argc);
	//median(x,argc);
	mode(x,argc);
}
