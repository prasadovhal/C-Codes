#include<stdio.h>

int main()
{
	char *ch[20];
	int i=0;
	char *end = "END";
	printf("Enter Node:\n");
	*ch[i] = getchar();
	while((ch[i]) != end)
	{
		printf("ddff");
		i++;
		//printf("Enter Node again:\n");
		*ch[i]=getchar();

	}
	printf("ddff");
	for(i=0;i<20;i++)
	{
		printf("%s",ch[i]);
	}
return 0;
}
