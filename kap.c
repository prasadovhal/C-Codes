#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int difference(int x)
{
	if(x == 6174)
		return x;
	int temp,b[4];
	int i,j,n;
	//printf("c1 %d\n",x);

	//printf("*****hello %d\n",x);	
	for(i = 0;i < 4;i++)
	{
		//printf("c3\n");
		b[i] = x % 10;
		x = x/10;
	}
	
	/*printf("all digits\n");	
	for(i = 0;i < 4;i++)
	{
		printf("%d\n",b[i]);
	}*/
	
	for(i = 0; i < 4;i++)
	{
		//printf("c4\n");
		for(j = 1; j < 4-i;j++)
		{
			if(b[j-1] > b[j])
			{
				temp = b[j-1];
				b[j-1] = b[j];
				b[j] = temp;
			}
		}
	}
	/*for(i = 0; i < 4;i++)
	{
		//printf("c4\n");	
		for(j = 0; j < 4-i;j++)
		{
			if(b[j] == b[j+1])
			{
				return printf("some digits are same\n");
				break;
			}
		}
	}*/	
	/*printf("sorted\n");	
	for(i = 0;i < 4;i++)
	{
		printf("%d\n",b[i]);
	}*/
	int smallnum;
	smallnum = b[3] + b[2] *10 + b[1] *100 + b[0] *1000;
	//printf("smallnum = %d\n",smallnum); 
	int largenum;
	largenum = b[0] + b[1] *10 + b[2] *100 + b[3] *1000;
	//printf("largenum = %d\n",largenum); 
	int diff;
	diff = largenum - smallnum;
	printf("%d\n",diff); 
	
	//printf("*****c2\n");
return difference(diff);
	//no*det(mat[1])-no2*det(mat[2])
}


int main(int argc,char *argv[])
{
	if(strlen(argv[1]) > 4)
		printf("Entered number is not 4 digit!!!!\n");
	else
	{
		int x;
		x = atoi(argv[1]);
		if(x%1111 == 0)
			printf("number is multiple of 1111,answer will not converge!!!!\n");
		else
			difference(x);
	}
}
