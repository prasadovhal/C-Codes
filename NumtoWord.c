#include<stdio.h>
#include<string.h>

char *oneTo20[20]={" ","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
 			"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN",
 			"EIGHTEEN","NINTEEN"};
char *tenths[10]={" ","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINTY"};
 
void printWord(int no)
{
	if(no<20)
	{
		printf(" %s ",oneTo20[no]);
	}
	else
	{
		int tenthPos=no/10;
		printf(" %s %s ",tenths[tenthPos-1],oneTo20[no%10]);	
	}
}

void printKya(int no,char* kya)
{
	if(no !=0)
	{
		printWord(no);
		printf(" %s ",kya);
	}
}

void printKitna(int no ,char *kya)
{
	if(no!=0)
	{
		if(no<100)
		{
			printKya(no,kya);
		}
		else
		{
			no= no%100;
			printKya(no,kya);
		}
	}
}

int main()
{
	 int no;
	 char buf[20];
	 printf("enter positve integer : ");
	 scanf("%d",&no);
	 if (no == 0)
	 	printf("zero");
	 else if(no<20)
	 	printWord(no);
	 else
	 {
	 	printKitna(no/100000,"LAKH");
	 	printKitna(no/1000,"THOUSAND");
	 	if(no%1000>99)
	 		printKitna((no%1000)/100,"HUNDRED");
	 	printWord(no%100);
	 }
return 0;
}
