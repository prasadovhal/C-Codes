#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j,x,b,m,k;
	printf("enter n:\n");
	scanf("%d",&n);
	
	i=j=0;
	x = 3;
	printf("prime numbers are:\n");
	printf("2\n3\n");
	while(j+2 < n)
	{
		k = ceil(sqrt(x));
		for(i=2;i<=(k+1);i++)
		{
			b = x%i;
			if(b==0)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		if(m == 0)
		{
			printf("%d\n",x);
			j++;
		}
		x += 2;
	}
}

