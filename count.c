#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char ch;
	fp = fopen("c_programmer.txt","r");
	int numWords,numLines,numSent,numChar;
	numWords = numLines = numSent = numChar=0;
	
	while(ch != EOF)
	{
		ch = getc(fp);
		if(ch !=EOF)
			printf("%c",ch);
		
		if(ch == ' ')
			numWords++;
		else if(ch == '\n')
			{
				numLines++;
				numWords++;
			}
		else if(ch == '.')
			numSent++;
			
		numChar++;
	}
	
	printf(" numWords = %d\n numLines =%d \n numSent=%d \n numChar=%d\n",
		numWords,numLines,numSent,numChar);
}
