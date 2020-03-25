#include<stdio.h>
#include"flab6-1.h"
void main()
{
	int a,b,s;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	s=ssf(a,b);
	printf("The sum of smallest factors = %d.",s);
}
