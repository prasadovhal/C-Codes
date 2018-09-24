#include<stdio.h>
#include<stdlib.h>
#define SIZE 1024

void mean(float *data,int argc)
{
	int i;
	float sum,meann;
	sum = 0.0;
	for(i = 0 ; i < argc ; i++)
	{
	 sum = sum + data[i];
	}
	
	meann = sum / (double) (argc-1);
	printf("mean = %f\n",meann);
}

void median(float *data,int argc)
{
	int i,j,k1,k2;
	float med;
        for(i=0;i<(argc-1);i++)
	{
		for(j=0; j<=(argc-2-i); j++)
		{
		   if(data[j] > data[j+1])
		    {
                     data[j]   = data[j] + data[j+1];
		     data[j+1] = data[j] - data[j+1];
		     data[j]   = data[j] - data[j+1];
	            }
	        }
	}
	/*printf("Sorted ascending Array is \n");
	       for(i=1; i<(argc); i++)
		 {
 		  printf("%f\n",data[i]);
 		 }*/
 	 if((argc-1)%2 == 0 )
 	  {
 	   k1 = (argc - 1)/2;
 	   k2 = (argc + 1)/2;
 	   med = (data[k1]+data[k2]) / 2; 
 	  }
 	 else 
 	  {
 	   k1 = argc / 2;
 	   med = data[k1];
 	  }
 	 
	printf("median = %f\n",med);
}

void mode(float *data,int argc)
{
	int i,j,no,temp=0;
	float mode;
	
	for(i=1;i<(argc);i++)
	{
	  no=0;
	  //printf("data[%d] = %f\n",i,data[i]);
		for(j=1; j<(argc); j++)
		{
		 if(data[i]==data[j])
		   no=no+1;
		 }
		 //printf("no =%d\n",no); 
	     if(no > temp)
	      {
	       mode = data[i];
	      }  	 
	  temp = no;
	}
	printf("mode = %f\n",mode); 

}

int main(int argc,char *argv[])
{
	int i;
	float data[SIZE];
	
	for(i=1;i<argc;i++)
	{
	 data[i] = atof(argv[i]);
	}
	
	mean(data,argc);
	median(data,argc);
	mode(data,argc);
return 0;
}
