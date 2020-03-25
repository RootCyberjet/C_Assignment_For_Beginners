#include<stdio.h>
#include"flab6-6.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=fact(n);
	printf("The factorial of %d = %d.\n",n,s);
}
/*
Enter the number : 6
The factorial of 6 = 720.

Enter the number : 7
The factorial of 7 = 5040.
*/
