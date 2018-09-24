#include<stdio.h>

int main()
{
	int n,F,Fn1,Fn2;
	int i;
	Fn1 = 1;
	Fn2 = 1;
	
	printf("Enter length of fibonachi series minus 2 to be find out : \n");
	scanf("%d",&n);
	
	F = 0;
	
	printf("%d  %d  ",Fn1,Fn2);
	
	for(i=0;i<n;i++)
	 {
	   F = Fn1 + Fn2;
	   printf("%d  ",F);
	   Fn1 = Fn2;
	   Fn2 = F;
	 } 
	 printf("\n");
return 0;
}
