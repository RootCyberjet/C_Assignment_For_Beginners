#include<stdio.h>
#include"flab6-3.h"
void main()
{
	int a,b,s;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	s=scf(a,b);
	printf("The smallest common factor of %d and %d is = %d.",a,b,s);
}
