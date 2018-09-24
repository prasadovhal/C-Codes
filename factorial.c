#include<stdio.h>

int main()
{
 int n, i;
 unsigned  factorial = 1;
 
 printf("Enter the no. n = ");
 scanf("%d", &n);

 if (n < 0 )
  printf("Factorial of negetive no. doesn't exist\n");
 else
 for (i = 1; i <= n; i++)
 {
  factorial = factorial * i ;
 }
 printf("Factorial of no. n = %d\n", factorial);

return 0;
}
