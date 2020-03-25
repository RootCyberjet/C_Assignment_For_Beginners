#include<stdio.h>
#include"flab6-3.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=pbd(n);
	printf("The position of biggest digit of %d from right is = %d.",n,s);
}
