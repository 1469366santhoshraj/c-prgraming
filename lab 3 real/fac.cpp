/* program ot find the sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int i,product=1,num;
	printf("Enter the number to get the factorial ; ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	product*=i;
	printf("The factorial of the numbers is %d ",product);
	return 0;
}
