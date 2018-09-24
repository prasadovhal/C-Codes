#include<stdio.h>
#include<math.h>

int main()
{
	int i,x,k,b;
	x = 3;
	int j = 0,m;
	while(x < 1000)
	{
		k = ceil(sqrt(x));
		for(i = 2; i < k+1; i++)
		{	
		 	b = x%i;
			if(b == 0)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		
		if(m == 0)
			printf("%d\n",x);
		x += 2;
	}	 
}
