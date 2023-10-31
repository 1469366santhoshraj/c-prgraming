/* to find the numbers of days in a month*/
#include<stdio.h>
int main ()
{
	int m,y;
	printf(" Enter the Month and Year to find the number of days in that month");
	scanf("%d %d",&m,&y);
	if ((y%4==0)&(y%100!=0 & y%400==0) && m==2)
	printf(" It has 29 days");
	else if (m==2)
	printf( "It has 28 days");
	else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	printf("It has 31 days");
	else
	printf("It has 30 days");
	return 0;
}