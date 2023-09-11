/* to find the gross salery of the employee*/ 
#include<stdio.h>
int main()
{
int tire;
double basic_salery, gross_salery, da, hra;	
 printf(" Enter the basic salary");
 scanf("%d", &basic_salery);
  da= basic_salery*0.16;
 printf("Enter the city tire");
 scanf("%d",tire);
 if (tire==1)
 {
 hra=0.4*basic_salery;
 printf("the hra is %d",hra);
}
 else if (tire==2)
 {
 hra=0.24*basic_salery;
  printf("the hra is %d",hra);
}
 else
 {
hra=0.12*basic_salery;
  printf("the hra is %d",hra);
}
 gross_salery=basic_salery+da+hra;
 printf("the gross salery is %d", gross_salery);
 return 0;
}
