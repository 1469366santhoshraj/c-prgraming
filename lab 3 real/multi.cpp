/*programt o find the multiplication table*/
#include<stdio.h>
int main()
{
	int i,n,d;
	printf("Enter a number to get the multiplicaton table:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	d=n*i;
	printf("%d x %d=%d\n",i,n,d);
    }
	return 0;
}
