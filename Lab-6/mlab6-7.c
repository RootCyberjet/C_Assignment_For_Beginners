#include<stdio.h>
#include"flab6-7.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=isr(n);
	printf("The integer square root of %d = %d.",n,s);
}
