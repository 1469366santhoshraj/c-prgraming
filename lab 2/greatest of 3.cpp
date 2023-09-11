/* program to find the greatest of three numbers*/
#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter three numbers to find the gratest amoung three");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c)
	printf("the gratest is %d",a);
	else if (b>c)
	printf("the gratest is %d",b);
	else
	printf("the gratest is %d",c);
	return 0;
}
