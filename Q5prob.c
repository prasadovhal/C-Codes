#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<ctype.h>
//==============================================================
int check(char g[],char p[])
{    
     int i;
     if(strlen(g) <= 5 && strlen(p) <= 5)
     {

          return 1; 
     }
     else
     {
          return 0;
     }
}
//==============================================================
char getParts(char str[])
{
    int i,ck; 
    char *pos = (char *) NULL,*t;
    char c,r = '\0',p[5],g[5],f[12];
    
    t = str;
    i = 0;
    while('.' != (c = *t))
    {
          if(! isdigit(c))
          {
               r = 'E';
               return r;
          }
          p[i] = c; 
       
          ++i;
          ++t;
    } 
    p[i] = '\0';


    ++t;
    pos = t;
    i = 0;
    int z = 0;
    while('\0' != (c = *t))
    {
          if(! isdigit(c))
          {
               r = 'E';
               return r;
          }

         
          g[i] = c;
          ++i;
          ++t;
    }
    g[i] = '\0';
  
    ck = check(g,p);

    if(ck == 1)
    {
         
          while(g[0] == '0')
          {
                for(i=1;i<strlen(g);i++)
                {

                     {
                          g[i-1] = g[i];
                     }
                }
                g[i-1] = '#';
          }
          
          while(strlen(g) < 5)
          {
              
               strcat(g,"#");
          
                
          }
          
          while(p[strlen(p) - 1] == '0')
          {
              p[strlen(p) - 1] = '\0';
                
          }
          

          strcat(g,".");

          

          printf("%s\n",strcat(g,p));       
    }
    else if(ck == 0)
    {
          printf("Invalid Entry?!\n");
    }   
}
//==============================================================
int main(int argc,char *argv[])
{
     float c;

  
     getParts(argv[1]);


     return 0;
}
