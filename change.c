#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int n,len,i,p,rem;
	if(argc != 1)
		printf("enter numbr on cmd:!!!\n");
	n = atoi(argv[1]);
	
	if(n >= 1000)
	{
		rem = n%1000;
		p = n/1000;
		printf("Rs 1000 x %d \n",p);
		n = rem;
	}
	if(n >= 500)
	{
		rem = n%500;
		p = n/500;
		printf("Rs 500 x %d\n",p);
		n = rem;
	}
	if(n >= 100)
	{
		rem = n%100;
		p = n/100;
		printf("Rs 100 x %d\n",p);
		n = rem;
	}
	if(n >= 50)
	{
		rem = n%50;
		p = n/50;
		printf("Rs 50 x %d\n",p);
		n = rem;
	}
	if(n >= 10)
	{
		rem = n%10;
		p = n/10;
		printf("Rs 10 x %d\n",p);
		n = rem;
	}
	if(n >= 5)
	{
		rem = n%5;
		p = n/5;
		printf("Rs 5 x %d\n",p);
		n = rem;
	}
	if(n >=  2)
	{
		rem = n%2;
		p = n/2;
		printf("Rs 2 x %d\n",p);
		n = rem;
	}
	if(n==1)
		printf("Rs 1 x%d\n",n);
}
