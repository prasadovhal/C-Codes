#include<stdio.h>
#include<math.h>

double 
sine_series(double x)
{
	const double eps = 1.0e-6; // complier will not allow to change eps b/c of const function if we still want to
	double t = x;
	double sum = t ,sum_old = 0.0;
	unsigned int n = 0;
	while(fabs((sum - sum_old)/sum) >= eps) // not divide by t_old b/c t=0 defined became infinite
	{
	 sum_old = sum;
	 t = (-1*t * x * x) /((double)(2*n+3)*(2*n+2)); // double used b/c of 5/8 retains a integer as 0 ; so avoid that mistake use double(mathematics issue)
	 sum = sum+t;
	 ++n;
	}
return sum;
}

int main()
{
	double x;
	printf("Plz enter x to calculate cosine(x) = ");
	scanf("%lf",&x);
	
	printf("exp(x) by our method = %lf\n",sine_series(x));
	printf("exp(x) by library method = %lf\n",sin(x)); // compare with library function
return 0;
}
