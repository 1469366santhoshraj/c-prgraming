/* program to fimd the simple and compound intrest*/
#include<stdio.h>
#include<math.h>
int main()
{
	int ci,p,r,t,si;
	printf("To find the compound intrest enter the following ");
	printf("enter the principle");
	scanf("%d",&p);
	printf("Enter the rate of the intrest");
	scanf("%d",&r);
	printf("Enter the life time spn of the intrest");
	scanf("%d",&t);
	p*r*t/100;
	ci=p*pow(p*(1+(r/100)),t) -p;
	printf("The compound intrest is %d", ci);
	printf("The simple intrest is %d, si");
	return 0;
}
