#include<stdio.h>

int main()
{
 int ch,count;
 printf("enter ch: ");
 count=0;
 ch=getchar();
 
while(ch != EOF)
 {
	putchar(ch);
	count++;
        ch=getchar();
 }
printf("total characters echoed = %d\n",count);
return 0;
}

