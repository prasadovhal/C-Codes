#include<stdio.h>

int main()
{
	int n1,n2,temp,remainder;
	printf("enter value of n1 and n2:\n ");
	scanf("%d %d",&n1,&n2);

	if(n1>n2)
	 {
	   n1=n1;
	   n2=n2;
	 }
	else
	{
	 temp = n1;
	 n1 = n2;
	 n2 = temp;
	}
	
	while((remainder=n1%n2) !=0)
		{
		  n1=n2;
		  n2=remainder;
		}
	printf("gcd =%d\n",n2);
return 0;
}	
