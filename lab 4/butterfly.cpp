//program to get the butterfly pattern
#include<stdio.h>
int main()
{
	int j,i,n,s;
	printf("Enter the height of the pattern");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("*");
	
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		printf("*");
		for(s=0;s<i;s++)
		printf(" ");
		for(s=0;s<i;s++)
		printf(" ");
		for (j=0;j<n-i;j++)
		printf("*");
			printf("\n");
	}
	
	return 0;
}
