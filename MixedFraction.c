#include<stdio.h>
#include<string.h>
#include<math.h>
/*-----------------------------------------------------------*/

unsigned long int gcd(unsigned long int a ,unsigned long int b)
{
     if(a<b)
     {
          unsigned long int tmp = a;
          a = b;
          b = tmp;
     }
     
     if(b == 0)
          return a;
          
     return gcd(b, a % b);
}
/*-----------------------------------------------------------*/
char getParts(char str[], unsigned long int *pN, unsigned long int *pD)
{
     char *pos = (char *) NULL, *t;
     char r = '\0', c;
     unsigned long int num = 0, den = 1, g;
     
     t = str;
     
     while('.' != (c = *t) )
     {
          if(! isdigit(c))
          {
               r = 'E';
               return r; 
          }
          ++t;
     }/*END OF WHILE*/
     pos = t;
     ++t;
     
     
     while('\0' != (c = *t) )
     {
          if(! isdigit(c))
          {
               r = 'E';
               return r; 
          }
          num = (num * 10) + (c - '0');
          den *= 10;
          
          ++t;
     }
     

     g = gcd(num, den);
     if(g > 1)
     {
          num /= g;
          den /= g;
     }
     *pos = '\0';
     *pN = num;
     *pD = den; 
     
      
     return r;
}


/*-----------------------------------------------------------*/
int main(int argc, char *argv[])
{
     unsigned long int n, d;
     char result;
     
     if(2 != argc)
     {
          printf("\n\nUsage: fractrational x.y\n\n");          
          return 0;
     }    
     
     result = getParts(argv[1], &n, &d);
     
     
     if('\0' != result)
     {
          printf("Something was wrong.Could not process.\n");
     }
     else
     {
          printf("\n= %s + %ld / %ld\n\n",argv[1] , n, d);
     }     
     return 0;
}
