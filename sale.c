#include<stdio.h>
#define Transistor 1
#define Resistor 2
#define Capacitor 3

int main()
{
 int code;
 float order, discount, net_payment;
 
 printf("get order from the buyer and code=\t");
 scanf("%f %d",&order, &code);

   switch(code)
     {
      case Transistor:
      discount = (order > 1000)? 0.1:0;
      break;

      case Resistor:
      discount = (order > 500)? 0.05:0;
      break;

      case Capacitor:
      discount = (order > 500)? 0.05:0;   
      break;
     
      default:
       printf("invalid product code\n");
       return 1;
     }
 net_payment = order - discount * order;
 printf("net_payment = %f\n",net_payment);

return 0;
}

