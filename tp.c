#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int function(int b,int *F)
{
	int k;
	printf("value of b is %d\n",b);
	printf("address of b is %p\n",&b);
	printf("address of F itself is %p\n",&F);
	printf("value in F is %d\n",*F);
	k = b + *F;
	printf("value of k is %d\n",k);
	printf("address of k is %p\n",&k);
return k;	
}


int main()//int argc, char *argv[]
{
	/*printf("hello C !\n");
	float a,b,c;
	printf("enter a and b: \n");
	scanf("%f %f",&a,&b);
	c = a / b;
	printf("%f\n",c);
	
	if(a > b)
		printf("%f is greater than %f\n",a,b);
	else
		printf("%f is greater than %f\n",b,a);
		
	printf("for loop\n");
	int i;
	for(i = 0;i < 5; i++)
	{
		printf("%d\n",i);
	}
	int j=0;
	printf("while loop\n");
	while(j <= 10)
	{
		printf("%d\n",j);
		j++;
		if(j == 6)
		{
			continue;
			printf("hi\n");
		}
			
	}
	int k=0;
	printf("do while loop\n");
	do
	{
		printf("%d\n",k);
		k++;
	}
	while(k < 5);
	
	printf("a = %f & b = %f are printed before function\n",a,b);
	function(a,b);
	printf("a = %f & b = %f are printed after function\n",a,b);
	
	
	int a[5][5][5],i,j,k;
	printf("enter 1d array\n");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			for(k = 0;k < 3;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("output array is \n");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			for(k = 0;k < 3;k++)
			{
				printf("a[%d][%d][%d] = %d\n",i,j,k,a[i][j][k]);
			}
		}
	}
	
	int a[5][5],i,j,k;
	printf("enter 2d array\n");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	int i;
	float val[20],len[20];
	for(i = 1;i < argc; i++)
	{
		printf("string argv[%d] = %s\n",i,argv[i]);
		printf("add of string argv[%d] = %p\n",i,&argv[i]);
		
		//val[i] = atof(argv[i]);
		//printf("int argv[%d] = %f\n",i,val[i]);
		//printf("add of int argv[%d] = %p\n",i,&val[i]);
		len[i] = strlen(argv[i]);
		printf("length argv[%d] = %f\n",i,len[i]);
	}
	
	int a=4,b=3,l;
	int *inP;
	inP = &a;
	printf("value of a is %d \n",a);
	printf("value of a in pointer is %d \n",*inP);
	printf("address of a is %p\n",&a);
	printf("address of a in pointer inP is %p\n",inP);
	printf("address of inP itself is %p\n",&inP);
	l = function(b,inP);
	printf("value of l is %d\n",l);
	printf("address of l is %p\n",&l);
	
	char a[10] = "prasad";
	char *b = (char *)malloc(sizeof(char*)*10);
	char *c = "ovhal";
	// b is dynamically allocated and c has statically allocated so free() will not in this case as we are assingning dynamic memory by static
	b = c;
	printf("%s\n",b);
	printf("asdasdasdasdasdasdasd");
	free(b);
	*/
	struct school {
	int rollno;
	char name;
	}s;
	printf("enter roll no.\n");
	scanf("%d",s.rollno);
	printf("%d\n",s.rollno);
return 0;
}
