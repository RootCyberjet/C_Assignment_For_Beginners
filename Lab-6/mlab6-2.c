#include<stdio.h>
#include"flab6-2.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=bd(n);
	printf("The biggest digit in %d is = %d.",n,s);
}
