#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int main(int argc, char *argv[])
{
    int i, j, n, x[argc];
    n = argc-1;
    if (argc > SIZE)
         {
          printf("Too many arguments to sort.\n");
          return 0;
         }

    for(i=1; i<=n; i++)
    {
	x[i-1] = atoi(argv[i]);
	printf("%d ", x[i-1]);
    }

    for(i=0; i<n; i++)
     {
      j=i-1;
      while ((x[i]< x[j]) && j > 0)
       {
         x[j+1]=x[j];
         j--;       
       }
         x[j+1]=x[i];
     }

    printf("The sorted array is\n");
     for(i=0; i<n; i++)
      {
	printf("%d  \n", x[i]);
      }
return 0;
}
