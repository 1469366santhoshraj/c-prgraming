/*program to get the next day of the input*/
#include<stdio.h>
int main ()
{
	int d,m,y,nd;
	printf("Enter the date month year to get the next day");
	scanf("%d %d %d",&d,&m,&y);
	if((d<0)||(m>=13)||(d>=32)||m<0)
	{
		printf(" Invalid input");
	}
	else if((y%4==0)&&(y%100!=0||y%400==0)&&(m==2)&&(d<29))
	{
		nd=d+1;
		printf("The next day is %d %d %d",nd,m,y);
	}
	else if((y%4==0)&&(y%100!=0||y%400==0)&&(m==2)&&(d==29))
	{
		nd=1;
		m++;
		printf("The next day is %d %d %d",nd,m,y);
	}
	else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<31))
	{
		nd=d+1;
		printf("The next day %d %d %d",nd,m,y);
	}
	else if((m==1||m==3||m==5||m==7||m==8||m==10)&&(d==31))
	{
		nd==1;
		m++;
		printf("The next day %d %d %d",nd,m,y);
	}
	else if((m==2)&&(d>29))
	{
		printf("Invalid input");
	}
	else if((m==4||m==6||m==9||m==11)&&(d>=31))
	{
		printf("Invalid input");
	}
	else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>=32))
	{
		printf("Invalid input");
	}
	else if(m>=13)
	printf("Invalid input");
	else if((m==4||m==6||m==9||m==11)&&(d<30))
	{
		nd=d+1;
		printf(" The next day is %d %d %d",nd,m,y);
	}
	else if ((m==4||m==6||m==9||m==11)&&(d==30))
	{
		nd=1;
		m++;
		printf("The next day is %d %d %d",nd,m,y);
	}
	else if ((m==12)&&(d==31))
	{
		nd=1;
		m=1;
		y++;
		printf(" The next day is %d %d %d",nd,m,y);
	}
	return 0;
}
