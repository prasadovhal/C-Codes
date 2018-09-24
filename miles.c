#include<stdio.h>

int main()
{
 float miles, gallons, gas_price, operating_cost;
 float miles_per_gallon,cost_per_mile;

 printf("miles travelled?\t gallons of gasoline used?\t  gasoline price?\t  opearting_cost?\t ");
 scanf("%f %f %f %f", &miles, &gallons, &gas_price, &operating_cost);

 miles_per_gallon = miles / gallons;
 cost_per_mile = ((gas_price * gallons) + operating_cost) / miles;

 printf("miles per gallon= %f\n",miles_per_gallon);
 printf("cost per mile= %f\n",cost_per_mile);

return 0; 

}
