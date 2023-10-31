/* to find the beat technique*/
#include<stdio.h>
int main()
{
	int tec1,tec2,tec3;
	printf("Enter the points of each three tecnique");
	scanf("%d%d%d",&tec1,&tec2,&tec3);
	if (tec1>tec2 & tec1>tec3)
	printf("First technique is the best \n");
	else if (tec2> tec3)
	printf("The beat technique is second");
	else 
	printf("The best tecnique is the third"); 
	return 0;	
}