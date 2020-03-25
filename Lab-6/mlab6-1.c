#include<stdio.h>
#include"flab6-1.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=led(n);
	printf("The last even digit of %d is = %d.",n,s);
}
