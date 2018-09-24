#include<stdio.h>

int gcd_algo(int a,int b)
{
  int temp;
  if(b == 0 )
   return a;
  else if (a == 0)
   return b;
  else if(a >= b && b > 0)
   return gcd_algo(b,(a % b));
  else if(a < b)
    {
     temp = a;
     a = b;
     b = temp;
     return gcd_algo(b,(a % b));
    }
}

int main()
{
	int a,b,gcd;
	printf("enter any 2 numbers:\n");
	scanf("%d %d",&a,&b);
	
	gcd = gcd_algo(a,b);
	if(gcd)
	 printf("gcd of %d and %d is %d\n",a,b,gcd);
	else
	 printf("invalid input !\n");
return 0;
}
