#include<stdio.h>
#include"flab6-8.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=dmt(n);
	printf("The first digit of multiple of 2 of %d = %d.",n,s);
}
