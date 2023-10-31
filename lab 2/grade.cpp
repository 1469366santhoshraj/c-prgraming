/*to find the grade with marks as input*/
#include<stdio.h>
int main()
{
	int mat,bio,phy,che,com;
	float per;
	printf("Enter the marks obtained in the subjects as follow Maths\n Physics\n Chemistry\n Biology\n Computer\n");
	scanf("%d %d %d %d %d",&mat,&phy,&che,&bio,&com);
	per=(mat+phy+che+bio+com)/5;
	if (per>=90)
	printf("Grade A");
	else if (per>=80)
	printf("Grade B");
	else if (per>=70)
	printf("Grade C");
	else if(per>=60)
	printf("Grade D");
	else if (per>=40)
	printf("Grade E");
	else
	printf("Grade F");
	return 0;
}