#include<stdio.h>

/*int gcd_f(int a , int b)
{
	int remainder;
	
return gcd_f(a,remainder);
}*/

int main()
{
	int a,b,temp,lcm,gcd,remainder;
	int c,d;
	printf("enter any 2 positive no.:\n");
	scanf("%d %d",&a,&b);
	
	c = a;
	d = b;
	
	if(c < d)
	 {
	   temp = c;
	   c = d;
	   d = temp;
	 }
	 
	 //gcd = gcd_f(a,b);
	 while((remainder = c % d) != 0)
	 {
	  c = d;
	  d = remainder;
	 }		
	 gcd = d;
	 lcm = (a * b) / gcd;
	 //printf("gcd of %d and %d is %d\n",a,b,gcd);
	 printf("lcm of nos is : %d\n",lcm);
return 0;
}
