#include<stdio.h>
#include"flab6-10.h"
void main()
{
	int n,l,u,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the lower limit : ");
	scanf("%d",&l);
	printf("Enter the upper limit : ");
	scanf("%d",&u);
	s=sm(n,l,u);
	printf("The sum of digits of %d between the range %d and %d is = %d.",n,l,u,s);
}
