#include<stdio.h>
#include"flab6-2.h"
void main()
{
	int n,k,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the value of k : ");
	scanf("%d",&k);
	s=kld(n,k);
	printf("The %d-th last digit of %d is = %d.",k,n,s);
}
