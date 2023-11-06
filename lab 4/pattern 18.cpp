//patern 18
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Ener the height of the row");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=1;j<=2*i+1;j++)
		{
		if(j%2==0)
		printf(" ");
		else
		printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}
