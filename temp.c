#include<stdio.h>
#define  degree 1
#define  fer    2 
#define  kelvin 3

int main()
{
 int temp;
 float C,F,K;

   printf("Enter temp scale for D(type 1) and for F(type 2) for K(type 3)\t");
   scanf("%d", &temp);


 if (temp==1)
    {
     printf("Enter temperature in D\t");
     scanf("%f",&C);
     
    F = (9./5.) * C + 32;
    K = C + 273.15f;
    printf("Temp in F= %f\n ",F);
    printf("Temp in K= %0.2f\n ",K);
    }
 else if(temp==2)
    {
     printf("Enter temperature in F\t");
     scanf("%f", &F);

     C = (F-32)*(5./9.);
     K = C + 273.15;
     printf("Temp in C = %f\n",C); 
     printf("Temp in K= %f\n",K);    
    } 
 else if(temp==3)
    {
     printf("enter temp in kelvin\t");
     scanf("%f", &K);
     C = K -273.15;
     F = (9./5.) * C + 32;
     printf("Temp in C= %f\n ",C);
     printf("Temp in F= %f\n ",F);
   }
return 0;
}
