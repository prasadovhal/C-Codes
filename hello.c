#include<stdio.h>


int function(int x[3][3][3])
{
	/*printf("in function before declaration values of x = %f\t ,y = %f\n",x,y);
	x = 12;
	y = 14;
	printf("in function after declaration values of x = %f\t ,y = %f\n",x,y);
	return (x,y);*/
	int i,j,k;
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			for(k = 0 ; k < 3; k++)
			{
				printf("x[%d][%d][%d] = %d\n",i,j,k,x[i][j][k]);
			}
		}
	}
}

int main()
{
	float a,b,div;
	int x[3][3];
	int i,j,k;
	printf("enter array elements \n");
	//scanf("%f %f",&a,&b);
	
	//arithmetic operation //
	/*div = a / b;
	printf("division of numbers is %f\n",div);
	
	//if and if-else //
	if(a < b)
		printf("%f is less than %f\n",a,b);
	else
		printf("%f is greater than %f\n",a,b);
	
	//for loop //
	for(i = 5 ; i >= 0;i--)
	{
		printf("%d\n",i);
	}
	
	//while loop //
	i = 0;
	while(i <= 5)
	{
		printf("%d\n",i);
		i++;
	}
	
	//for function declaration //
	printf("before function values of a = %f\t ,b = %f\n",a,b);
	function(a,b);
	printf("after function  values of a = %f\t ,b = %f\n",a,b);
	
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			for(k = 0 ; k < 3; k++)
			{
				printf("x[%d][%d][%d] = ",i,j,k);
				scanf("%d",&x[i][j][k]);
			}
		}
	}
	printf("entered array is\n");
	function(x);*/
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("matrix is :\n");
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}
