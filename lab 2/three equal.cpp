/* to find the three numbers are equal*/
#include<stdio.h>
int main()
{
	int a,s,d;
	printf("Enter three numbers ");
	scanf("%d %d %d",&a,&s,&d);
	if(a==s && s==d && d==a)
	printf("The three numbers are equal\n");
	else
	printf("the three numbers are not equal");
	return 0;
}