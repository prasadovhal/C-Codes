#include<stdio.h>

int main()
{
 int num;
 int d1,d2,d3,d4,sum;

 printf("enter 4 digit no.=\t");
 scanf("%d",&num);

 d1 = num % 10;
 num = num / 10;
 
 d2 = num % 10;
 num = num / 10;
 
 d3 = num % 10;
 num = num / 10;
 
 d4 = num % 10;
 num = num / 10;
 
 sum = d1 + d2 + d3 + d4;
 printf("sum= %d\n",sum);

return 0; 
}
