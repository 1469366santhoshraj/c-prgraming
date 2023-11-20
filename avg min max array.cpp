/*program to find the min max and average using array*/
#include<stdio.h>
int main ()
{	
int n,i,min=0,max=0,sum=0;
printf("Enter the length of the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter the values of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
min=a[0];
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
printf("maximum of the array is %d\n",max);
printf("minimum of the array is %d\n",min);
float avg=sum/n;
printf("Average of the array is %f\n",avg);
return 0;
}
