#include<stdio.h>
#include<math.h>

float determinant(float a[25][25], int k)
{
	float s = 1, det = 0,b[25][25];
	int i, j, m, n, c;
	if (k == 1)
    {
     return (a[0][0]);
    }
  	else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = a[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }
    return det;
}

int main()
{
  float a[25][25],det;
  int i,j,k;
  printf("Enter the order of the Matrix : ");
  scanf("%d", &k);
  
  printf("enter matrix rowwise\n");
  for(i = 0;i < k; i++)
  {
  	for(j = 0;j < k ;j++)
  	{
  		scanf("%f",&a[i][j]);
  	}
  }
  det = determinant(a,k);
  printf("det = %f\n",det);
return 0;
}
