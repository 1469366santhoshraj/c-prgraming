/* to find the weekend by date*/
#include<stdio.h>
int main()
{
	int date;
	printf(" Enter the day to finds its respective weekday");
	scanf("%d",&date);
	if(date==1)
	printf("Monday");
	else if (date==2)
	printf("Tuesday");
	else if (date==3)
	printf("Wednesday");
	else if (date==4)
	printf("Thursday");
	else if (date==5)
	printf("Friday");
	else if (date==6)
	printf("saturday");
	else
	printf("sunday");
	return 0;
}