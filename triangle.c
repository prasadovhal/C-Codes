#include<stdio.h>
#include<math.h>
#define e  10^-4

int main()
{
 float a,b,c;
 
 printf("Enter the sides of triangle=  ");
 scanf("%f %f %f", &a, &b, &c);
 printf("Sides are %f %f %f\n ", a, b, c);

 if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
   printf("Triangle is not possible\n");
 else 
   {
    if (a == b == c )
   printf("Triangle is equilateral\n");
    else 
     if (a == b || b == c || c == a)
      printf("Triangle is isoscales only\n");
    else
     if((fabs(a*a - b*b + c*c) < e || fabs(b*b - a*a + c*c) < e || fabs(c*c == a*a + b*b) < e) && (a == b || b == c || c == a))
       printf("Triangle is isoscales and right angled also\n");
     else
      if((fabs(a*a - b*b + c*c) < e || fabs(b*b - a*a + c*c) < e|| fabs(c*c == a*a + b*b) < e ) && (a != b != c))
       printf("Triangle is scalene and  right angled also\n");
      else
       printf("Triangle is scalene only\n");
   }
return 0;
}
