#include<stdio.h>
int main()
{ int a,b,c,d,f,e,g;
printf(" enter the marks of the student according to the subjects");
scanf("%d %d %d %d %d" ,&a,&b,&c,&d,&e);
f=a+b+c+d+e;
g=f/5;
printf("average of the student is %d",g);
return 0;
}
