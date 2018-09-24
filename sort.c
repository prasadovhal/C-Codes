#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void sort(int argc,float *a,char* last)
{
	int i,j;
        for(i=1;i<(argc);i++)
	{
		for(j = 1; j <= (argc-2-i); j++)
		{
		 if (a[j] > a[j+1])
		 {
		  a[j] = a[j] + a[j+1];
		  a[j+1] = a[j] - a[j+1];
		  a[j] = a[j] - a[j+1];
	         }
	        }
	}
	
	if( *last == 'A')
	{
	     printf("Sorted ascending Array is \n");
	       for(i=1; i<(argc-1); i++)
		 {
 		 printf("%f\n",a[i]);
 		 }
 	}
 	else if( *last == 'D')
 	 {
 	  printf("Sorted descending Array is \n");
	   for(i=(argc-2); i >0 ; i--)
		{
 		printf("%f\n",a[i]);
 		}
 	 }
}

int main(int argc, char *argv[])
{
	int i;
	int len;
	char* last;
	float a[argc];
	/*for(i = 1; i < argc; i++)
	{
	  printf("%s\n",argv[i]);
	}*/
	//printf("argc = %d\n",argc);
	last = argv[argc-1];
	//printf("last = %c\n",*last);
	
	for(i = 1; i < (argc-1); i++)
	{
	  a[i] = atof(argv[i]);
	  //printf("int argv[%d] = %f \n",i,a[i]);
	}
	
	sort(argc,a,last);	
return 0;
}
