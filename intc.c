#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int len, num_int;
	float num;
	//char d ='.' ;
	char *dot;
	/*for(i=1;i<argc;i++)
	{
	 printf("argv[%d] = %s\n",i,argv[i]);
	}*/
	
	//len = strlen(argv[1]);
	//printf("len = %d\n",len);
	
	//num = atof(argv[1]);
	//printf("num = %0.5f\n",num);
	
	//num_int =(long int)(num);
	//printf("num_int = %d\n",num_int);
	
	char *s = argv[1];
	/*dot = strchr(s,'.');
	unsigned int pos = dot - s;
	printf("pos of dot = %u\n",pos);
	
	float k = num - num_int;
	printf("k = %0.5f\n",k);*/
	int nu = 0,i=0,j=0;
	char c;
	char r;
	char *pos;
	char ch1[5],ch2[5];
	while('.' != (c = *s) )
        {
          if(! isdigit(c))
          {
               r = 'E';
               return r;
          }
          ch1[i] = c;
          //printf("%c\n",ch1[i]);
          ++i;
          ++s;
       }/*END OF WHILE*/
     //pos = s;
     ch1[i] = '\0';
     printf("%s\n",ch1);
     ++s;
	
	while('\0' != (c = *s))
	{
		if(! isdigit(c))
          {
               r = 'E';
               return r; 
          }
          //nu = (nu * 10) + (c - '0');
          ch2[j] = c;
          //printf("%c\n",ch2[i]);
          ++j;
          ++s;
	}ch2[j] = '\0';
	printf("%s\n",ch2);
	int len2 = strlen(ch2);
	printf("len2 = %d\n",len2);
	for(i = 1;i<=4;i++)
	{
		if(ch2[0] == '0')
		{
			ch2[i-1] = ch2[i];
			ch2[i] = '\0';
			
		}
	
	}
	printf("%s\n",ch2);
	
	/*printf("nu = %d",nu);
	for(i =0;i <=(pos-);i++)
	{
	 if (i == pos)
	  printf(".");
	 else
	  printf("#");
	}
	printf("%d",num_int);*/
	
			
return 0;	
}
