#include<stdio.h>
#include<math.h>

int main()
{
 float theta,theta_r, v ,d ,t ,h;
 float g;
 const float pi=3.141593;
 print("Enter v (m/s) first then enter theta (degree) ");
 scanf("%f %f ",&v ,&theta);

 g=9.80f; 
 theta_r = (pi * theta) / 180.0f;
 
 d = (v * v * sin(2.0f * theta_r)) / g;
 t = (2.0f * v* sin(theta_r)) / g;
 h = (v * v* sin(theta_r) / g);

 printf("%f %f %f", &d, &t, &h);

 return 0;
}
