#include<stdio.h>
#define bit_8  1
#define bit_16 2
#define bit_32 3

int main()
{
 int code;
 float order, discount, net_payment;
 char a[10][10]= {"customer", "industrial", "government", "university"};

 printf("get order from the buyer and code and whos is the buyer=\t");
 scanf("%f %d",&order, &code);

     switch(code)
       {
        case bit_8:
        discount = 0.1;
        break;

        case bit_16:
        if (order >10000)
            {
             if("customer"=="industrial"|| "university")
               discount = 0.05;
            else 
               discount = 0.06;
            }
        else
           discount = 0;
        break;

        case bit_32:
        if (order < 50000)
           {
            if("customer"=="industrial")
              discount = 0.05;
            else if("customer"=="government")
              discount = 0.065;
            else if("customer"=="university")
              discount = 0.075;
           }
        else if(50000 <= order < 100000)
              {
               if("customer" == "industrial")
                 discount = 0.075;
               else if("customer" == "government")
                 discount = 0.085;
               else if("customer"=="university")
                 discount = 0.075;
              }
        else if(order > 100000)
               {
                if("customer"=="industria"|| "university")
                 discount = 0.1;
                else if("customer"=="university")
                 discount = 0.075;                 
               }
        break;
     
        default:
        printf("invalid product code\n");
        return 1;
     }

 net_payment = order - discount * order;
 printf("net_payment = %f\n",net_payment);

return 0;
}
