/* to find the type of the triangle*/
#include<stdio.h>
int main () 
{
	int a,b,c;
	printf("Enter the length of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("The triangle is Equilateral");
	else if (a==b || b==c || c==a)
	printf("The trinagle is isosceles");
	else 
	printf("The triangle is scalene");
	return 0;
}