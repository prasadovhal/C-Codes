#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int i,j;
	float x1,y1,x2,y2;
	char array[100];
	printf("enter co-ordinates of points\n");
	scanf("%[^\n]s",array);
	
	sscanf(array,"(%f,%f) (%f,%f)",&x1,&y1,&x2,&y2);
	//printf("%f %f %f %f\n",x1,y1,x2,y2);
	
	float OA = sqrt(x1*x1 + y1*y1);
	float OB = sqrt(x2*x2 + y2*y2);
	
	float Nr = x1*x2 + y1*y2;
	
	float theta;
	theta = (180 * acos(Nr / (OA * OB))) / M_PI;
	printf("angle in degrees is %d \n",(int)ceil(theta));
return 0;
}
