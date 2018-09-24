#include<stdio.h>
#define Start 10
#define End 99

int main()
{
	int n,r,p,k,persistancy;
	printf("Enter no.whose persistancy has to find=   ");
	scanf("%d",&n);
	persistancy=1;
	r=1;
	
	p = n / 10;
	r = n % 10;
	k = p * r;
	//printf("k = %d\n",k);
	
	while(k>=10)
	  {
	   n = k;
	   p = n / 10;
	   r = n % 10;
	   k = p * r;
	   persistancy = persistancy + 1;
	   //printf("k = %d\n",k);
	  }
	  printf("persistancy = %d\n",persistancy);
return 0;
}
