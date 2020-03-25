#include<stdio.h>
#include"flab6-5.h"
void main()
{
	int s,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=eld(n);
	printf("The required number of %d after exchanging last two digit is = %d.\n",n,s);
}
/*
Enter the number : 247156
The required number of 247156 after exchanging last two digit is = 247165.

Enter the number : 45764
The required number of 45764 after exchanging last two digit is = 45746.

*/
