#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char ch;
	fp = fopen("c_programmer.txt","r");
	//ch = getc(fp);
	//printf("%c",ch);
	int numWords,numlines,numSent,numChar;
	numWords=numlines=numSent=numChar=0;
	//numChar++;
	while(ch!=EOF)
	{
		ch =getc(fp);
		
		if(ch != EOF)
			printf("%c",ch);
		if(ch == ' ' )
		{
			numWords++;
		}
		else if(ch == '\n')
		{
			numlines++;
			numWords++;
		}
		else if(ch == '.')
		{
			numSent++;
			//numWords++;
		}
		
		numChar++;
	}
	
	printf(" numWords = %d\n numLines =%d \n numSent=%d \n numChar=%d\n",
		numWords,numlines,numSent,numChar);
return 0;
}
