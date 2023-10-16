/*program to find the min max and average using array*/
#include<stdio.h>
int main ()
{	
int n,i,min=0,max=0,sum=0;

printf("Enter the length of the array...\n");
scanf("%d",&n);

int a[n];

printf("Enter the values of the array....\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Printing the array\n");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
max =a[0];
for(i=0;i<n;i++)
{
	if(min>a[i])
	{
		min=a[i];
	}
	if(max<a[i])
	{
		max=a[i];
	}
	sum+=a[i];
}
return 0;
}
