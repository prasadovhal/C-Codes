#include<stdio.h>

int factorial(unsigned int n)
  { 
    if (0==n)
     return 1;
    else 
     return n*factorial(n-1);
  }

int main()
{
	int n;
	printf("enter value of n:\n");
	scanf("%d",&n);
		
	int a[n+1],i;
	
	/*for(i=0; i<=n ;i++)
	{
	  a[i] = factorial(n) / (factorial(n-i) * factorial(i));
	  printf(" %d ",a[i]);
	}*/
	
	int j;
	printf("pascal triangle for %d is\n",n);
	for(i=0; i<=n ;i++ )
	{
	 for(j=0; j<=i ;j++)
	 {
	   a[j] = factorial(i) / (factorial(i-j) * factorial(j));
	   printf(" %d ",a[j]);
	 }
	 printf("\n");
	}
return 0;
}
