#include<stdio.h>


double RK2(double y_old, double h)
{
	double x, y_new;
	int xlast=1; 
	double k1,k2;
	
	for (x=0;x <= xlast;)
	{
		k1 = h * x * x * y_old * y_old * y_old;
		k2 = h * (x + h)* (x + h) * (y_old + k1) * (y_old + k1) * (y_old + k1);
		y_new = y_old + (k1 + k2)/2;	
		x=x+h;
		y_old = y_new;
	}
	printf(" x and y by RK2 Method\n");
	printf(" x = %lf\n",x);		
	printf(" y_new = %lf\n",y_new);
}

double RK3(double y_old, double h)
{
	double x, y_new;
	int xlast = 1; 
	double k1,k2,k3;
	
	for (x=0;x <= xlast;)
	{
		k1 = h * x * x * y_old * y_old * y_old;
		k2 = h * (x + (double)(h/2))* (x + (double)(h/2)) * (y_old + (double)(k1/2)) * (y_old + (double)(k1/2)) * (y_old + (double)(k1/2));
		k3 = h * (x + h)* (x + h) * (y_old - k1 + 2 * k2) * (y_old - k1 + 2 * k2) * (y_old - k1 + 2 * k2);
		y_new = y_old + (double) ((k1 + 4 * k2 + k3) /6);	
		x=x+h;
		y_old = y_new;
	}
	printf(" x and y by RK3 Method\n");
	printf(" x = %lf\n",x);		
	printf(" y_new = %lf\n",y_new);
}

double RK4(double y_old, double h)
{
	double x, y_new;
	int xlast = 1; 
	double k1,k2,k3,k4;
	
	for (x=0;x <= xlast;)
	{
		k1 = h * x * x * y_old * y_old * y_old;
		k2 = h * (x + (double)(h/2)) * (x + (double)(h/2)) * (y_old + (double)(k1/2)) * (y_old + (double)(k1/2)) * (y_old + (double)(k1/2));
		k3 = h * (x + (double)(h/2)) * (x + (double)(h/2)) * (y_old + (double)(k2/2)) * (y_old + (double)(k2/2)) * (y_old + (double)(k2/2));
		k4 = h * (x + h)* (x + h) * (y_old + k3) * (y_old + k3) * (y_old + k3);
		y_new = y_old + (double) ((k1 + 2 * k2 + 2 * k3 +k4) /6);	
		x=x+h;
		y_old = y_new;
	}
	printf(" x and y by RK4 Method\n");
	printf(" x = %lf\n",x);		
	printf(" y_new = %lf\n",y_new);
}



int main()
{
	double x_old = 0.0, y_old = 1.0, h = 0.01;
	double y_new;
	double k1,k2,k3,k4;
	
	RK2(y_old, h);
	RK3(y_old, h);
	RK4(y_old, h);
return 0;
}

