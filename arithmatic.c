#include<stdio.h>

void operation(float a,float b,char c)
{
	float ans;
	if (c == '+')
	  {
	   ans = a + b;
	   printf("%0.2f\n",ans);
	  }
	else if(c == '-')
	 {
	   ans = a - b;
	   printf("%0.2f\n",ans);
	 }
	else if(c == '%')
	 {
	   printf("ERROR : unknown operator!!!\n");
	 }
	else if(c == '*')
	 {
	   ans = a * b;
	   printf("%0.2f\n",ans);
	 }
	else if(c == '/' && b==0.0)
	 {
	   ans = a / b;
	   printf("ERROR : divide by zero!!!\n");
	 }
	else if(c == '/')
	 {
	   ans = a / (double)(b);
	   printf("%0.2f\n",ans);
	 }
}

int main()
{
	float a,b;
	char c;
	
	printf("enter any  2 real numbers and operation as a (operation) b:\n");
	scanf("%f %c %f",&a,&c,&b);	
	operation(a,b,c);
	  
return 0;
}
