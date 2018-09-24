#include<stdio.h>
#define A 1000

void merge(int x[],int p,int q,int r)
{
  int L[A/2 +1], R[A/2 + 1];
  int i , j , k;
  int n1 = q - p + 1;
  int n2 = r - q;
   

    for(i=0 ; i < n1 ; ++i)
     {
      L[i]= x[p+i];
     }


    for(j=0 ; j < n2 ; ++j)
     {
      R[j]= x[q+1+j];
     }


    L[n1]=1 << 8*sizeof(int)-2;
    R[n2]=1 << 8*sizeof(int)-2;


    i = j = 0;


    for(k=p ; k <= r ; ++k)
     {
      if (L[i] <= R[j])
         {
          x[k]=L[i];
          ++i;
         }
         else
        {
         x[k]=R[j];
         ++j;  
        }
     }
}

void msort(int x[],int left, int right)
{ 
   if (left < right)
  {
    int mid= (left + right)/2;
    msort(x, left, mid);
    msort(x, mid+1, right);
    merge(x, left, mid, right);  
  }
}

void main()
{
 	int x[A];
  	int n, i;
  	printf("enter the no of elements\n");
  	scanf("%d", &n);
           printf("Enter elements \n");
	for(i=0; i<n; i++)
	{
         scanf("%d",&x[i]);
	}
   msort(x, 0, n-1);

   printf("Sorted Array is \n");

	for(i=0; i<n; ++i)
           {
 	     printf("%d  ",x[i]);
           }
}
