#include <stdio.h>

int factorial(unsigned int n)
  { 
    if (0==n)
     return 1;
    else 
     return n*factorial(n-1);
  }

int main()
{
  
    unsigned int n,fact;
    printf("Enter n  \n");
    scanf("%d",&n);

    fact=factorial(n);
    printf("Factorial of no. is \n ");
    printf("%d\n",fact);
  
}
