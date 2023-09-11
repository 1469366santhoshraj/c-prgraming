/* to calculate the electric bill*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the units");
	scanf("%d", &a);
	if (a>=0 && a<=100)
	{
	b=a*2;
	printf(" Electric billl is %d",b);
    }
    else if (a>=100 && a<=250)
	{
	b=a*3;
	printf("the Electric bill is %d",b);	
	}
	else 
	{
	b=a*5;
	printf(" the Electric bill is %d",b);
	}
 return 0;
}
