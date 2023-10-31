/*porgram to find the length of the number*/
#include<stdio.h>
int main()
{
	int x,a,b;
	printf("Enter the number to find the length of the number");
	scanf("%d",&a);
	x=a;
	b=0;
	while(a>0)
	{
	b++;
	a=a/10;
	}
	printf("The number has a %d digits",b);
	return 0;
}
