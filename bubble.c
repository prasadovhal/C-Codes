#include<stdio.h>
#define A 100

void main()
{
 	float x[A];
  	int n, i, j;
  	printf("enter the no of elements\n");
  	scanf("%d", &n);
           printf("Enter elements \n");
	for(i=0; i<n; i++)
	{
		scanf("%f",&x[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
		if(x[j]>x[j+1])
		{
		x[j]=x[j]+x[j+1];
		 x[j+1]=x[j]-x[j+1];
		 x[j]=x[j]-x[j+1];
	    }
	    }
	}
         printf("Sorted Array is \n");
	for(i=0; i<n; i++)
		{
 		printf("%f\n",x[i]);
 		}
}
