#include<stdio.h>
#include<math.h>
#define Pi 3.1415927


void polar(float x , float y)
{
	float r,theta;
	if (x==0,y==0)
	 {
	  r=0;
	  theta=0;
	  printf("origin\n");
	 }
	else
	{
	 r = sqrt(x*x+y*y);
	 theta = atan(y/x);
	}
}

int main()
{
	float x,y,r,theta;
	printf("Enter cartesian co-ordinates x and y=  ");
	scanf("%f %f",&x,&y);
	
	polar(x,y);
	printf("polar cordinates are r=%f, theta=%f\n",r,theta);

}
