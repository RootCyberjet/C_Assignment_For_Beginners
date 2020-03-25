#include<stdio.h>
#include"flab6-6.h"
void main()
{
	int n,k,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the value of k : ");
	scanf("%d",&k);
	s=dkl(n,k);
	printf("The number after deleting %d-th digit from %d is = %d.",k,n,s);
}
