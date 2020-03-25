#include<stdio.h>
#include"flab6-8.h"
void main()
{
	int n,k,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the digit : ");
	scanf("%d",&k);
	s=omto(n,k);
	printf("The sum of digits of a number %d which are more than %d is = %d.\n",n,k,s);
}
/*
Enter the number : 47563
Enter the digit : 2
The sum of digits of a number 47563 which are more than 2 is = 25.

Enter the number : 57659939
Enter the digit : 8
The sum of digits of a number 57659939 which are more than 8 is = 27.

*/
