/*check whether given year is leap year or not*/
#include<stdio.h>
int main ()
{
	int a;
	printf(" Enter the year");
	scanf("%d", &a);
	if (a%4==0 && (a%100!=0 || a%400==0))
	 printf("the given year is a leap year");
	else
	 printf("The given year is non leap year");
	return 0;
}
