//pattern 17
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter the heigth of the row");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			k++;
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}

