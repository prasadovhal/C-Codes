#include<stdio.h>

int main()
{
 int tower;
 float position, distance ,velocity;

 printf("enter car's position from tower\t");
 scanf("%f",&position);

if (position <= 250)
  {
   tower = 1;
   distance = position;
  }
else if (position <= 750 )
  {
   tower = 2;
   distance = position < 500 ? 500 - position : position - 500;
  }
else 
  {
   tower = 3;
   distance = 1000 - position;
  }
 
if (distance <= 30 )
   velocity = 2.425 + 0.00175 * distance * distance;
else
   velocity = 0.0625 + 0.12 * distance - 0.00025 * distance * distance;

printf("Nearest tower: %d  velocity: %f  \n",tower,velocity);

return 0;
}
