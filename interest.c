#include<stdio.h>
#define Bonus 0.0975
#define Regular 0.0875

int main()
{
 float principle, rate , interest;
 int years;
 
 printf("principle?\t years?\t");
 scanf("%f %d",&principle, &years);

 if(principle > 10000 || years > 5)
    rate = Bonus;
 else
    rate = Regular;

 interest = principle * rate * years;
 
 printf("interest = %f",interest);
 
return 0;
}
