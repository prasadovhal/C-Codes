#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int karpe(int n)
{
	if(n == 6174)
		return n;
	int i,j,arr[5],temp;
	for(i = 0;i < 4;i++)
	{
		arr[i] = n%10;
		n = n/10;
	}
	/*printf("after separte\n");
	for(i =0;i<4;i++)
	{
		printf("%d\n",arr[i]);
	}*/
	
	for(i=1;i<4;i++)
	{
		for(j=1;j < 4;j++)
		{
			if(arr[j-1] > arr[j])
			{
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	/*printf("sorted\n");
	for(i =0;i<4;i++)
	{
		printf("%d\n",arr[i]);
	}*/
	
	int big = 1000*arr[3] + 100*arr[2]+ 10*arr[1] + arr[0];
	//printf("%d\n",big);
	int small = arr[3] + 10*arr[2]+ 100*arr[1] + 1000*arr[0];
	//printf("%d\n",small);
	
	int diff = big - small;
	printf("%d\n",diff);
return (karpe(diff));
}


int main(int argc,char *argv[])
{
	//printf("%s\n",argv[1]);
	if(argc != 2)
		printf("enter a number on command line!!!\n");
	else if((atoi(argv[1]))%1111 == 0)
		printf("number is multiple of 1111,difference can not be find out\n");
	else	
		karpe(atoi(argv[1]));
return 0;
}
