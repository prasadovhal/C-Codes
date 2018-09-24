#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int i,j;
	if(argc <= 1)
		printf("enter array on command line!!!\n");
	float arr[argc],temp;
	for(i = 1;i < argc;i++)
	{
		arr[i] = atof(argv[i]);
	}

	/*printf("entered array is:\n");
	for(i = 1;i < argc;i++)
	{
		printf("arr[%d] = %f\n",i,arr[i]);
	}*/
	//bubble sort
	/*for(i = 1;i < argc; i++)
	{
		for(j = 1; j < (argc - i);j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}*/
	//insertion sort
	for(i = 1;i < argc; i++)
	{
		j = i;
		while(j > 0 && (arr[j-1] > arr[j]))
		{
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	printf("output sorted array is:\n");
	for(i = 1;i < argc;i++)
	{
		printf("arr[%d] = %f\n",i,arr[i]);
	}

return 0;
}
