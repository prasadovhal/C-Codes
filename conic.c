#include<stdio.h>
#include<math.h>

void determinant(int a,int b, int c,int h,int g,int f)
{
	int det,eqtn;
	det = (a*(b*c-f*f)) - (h*(h*c-f*g)) + (g*(h*f-b*g));
	printf("det = %d\n",det);
	
	if(det != 0)
	 {
	  eqtn = (a*b- h*h);
	  printf("eqtn = %d\n",eqtn);
	    if(eqtn > 0)
	      {
	       printf("conic is ellipse\n");
	      }
	    else if(eqtn < 0)
	      {
	       printf("conic is hyperbola\n");
	      }
	    else 
	      {
	       printf("conic is parabola\n");
	      }
	 }
	 else
	 {
	  eqtn = (a*b- h*h);
	  printf("eqtn = %d\n",eqtn);
	    if(eqtn > 0)
	      {
	       printf("two imaginary lines\n");
	      }
	    else if(eqtn = 0)
	      {
	       printf("two real lines\n");
	      }
	    else if(eqtn < 0)
	      {
	       printf("two intersecting lines\n");
	      }
	 }
}

int main()
{
	int a,b,c,h,g,f;
	
	printf("enter coefficients of ax^2+by^2+2hxy+2gx+2fy+c=0\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&h,&g,&f);
	
	determinant(a,b,c,h,g,f);
return 0;
}
