#include<stdio.h>

int main()
{
 int A,B,C,D,m,d,y,c,R;

 printf("Enter the date as mm/dd/yyyy\t");
 scanf("%d %d %d %d",&m,&d,&c,&y);

 A = (13*m-1)/5; 
 B = y/4;
 C = c/4;
 D = A + B + C + d + y - 2*c;
 R = D % 7;
 
 if(R==6)
    printf("Sunday\n");
 else if(R==0)
    printf("Monday\n");
 else if(R==1)
    printf("Tuesday\n");
 else if(R==2)
    printf("Wednesday\n");
 else if(R==3)
    printf("Thursday\n");
 else if(R==4)
    printf("Friday\n");
 else if(R==5)
    printf("Saturday\n");

return 0;
}
