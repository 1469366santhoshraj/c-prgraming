/*program to print the odd numbers*/
#include<stdio.h>
int main()
{
	int i,n,d;
	printf("Enter a number to get the odd numbers until it");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	printf("%d\n",i);
	return 0;
}
