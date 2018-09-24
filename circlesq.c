#include<stdio.h>
#define Pi 3.14159265

int main()
{
 float r;
 float area_circle, area_square, ratio;

 printf("Enter radius=\t");
 scanf("%f",&r);

 area_circle = Pi * r * r;
 printf("area of circle= %f\n",area_circle);

 area_square = 2 * r * r;
 printf("area of square= %f\n",area_square);

 ratio = area_circle / area_square;
 printf("ratio = %f\n",ratio);

return 0;
}
