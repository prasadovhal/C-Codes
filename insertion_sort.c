#include<stdio.h>
#define SIZE 1024

int main()
{
	int i,j,n;
	float x[SIZE],temp;
	printf("no. of terms:");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	 {
          scanf("%f",&x[i]);
	 }

	for(i = 1;i < n;i++)
	 {
	  j = i;
	   while((j > 0) && (x[j-1] > x[j]))
	   {
			temp = x[j];
			x[j] = x[j-1];
			x[j-1] = temp;
			j--;
	    }
	 }	
	 
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
	 printf("%f\n",x[i]);
	}
return 0;
}
