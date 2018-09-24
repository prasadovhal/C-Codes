#include<stdio.h>
#include<math.h>

float determinant(float a[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
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
    return (det);
}


int main()
{
	float a[25][25], k, d;
	int i, j;
	
	printf("Enter the order of the Matrix : ");
	scanf("%f", &k);
	
	printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
	
	for (i = 0;i < k; i++)
	{
		for (j = 0;j < k; j++)
	  	{
			scanf("%f", &a[i][j]);
		}
	}
	d = determinant(a, k);
	printf("determinant is %f\n",d);
}

