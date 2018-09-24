#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[10] = "prasad";
	char *b = (char *)malloc(sizeof(char)*10);
	char c[10] = " ovhal";
	printf("string a is %s\n",a);
	printf("address of string a is %p\n",&a);
	int len = strlen(a);
	printf("length of a is %d\n",len);
	strcpy(b,a);
	printf("string b is %s\n",b);
	strcat(a,c);
	printf("string a is %s and c is %s\n",a,c);
	int r = strcmp(a,c);
	printf("string r = %d \n",r);


return 0;
}
