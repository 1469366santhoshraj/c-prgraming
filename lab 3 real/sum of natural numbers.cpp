/* program ot find the sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int i,sum=0,num;
	printf("Enter the number to get the sum of first natural numbers; ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	sum+=i;
	printf("The sum of the numbers is %d ",sum);
	return 0;
}
