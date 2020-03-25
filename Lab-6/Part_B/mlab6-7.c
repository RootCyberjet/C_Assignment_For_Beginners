#include<stdio.h>
#include"flab6-7.h"
void main()
{
	int a,b,s;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	s=socf(a,b);
	printf("The sum of common factors of %d and %d is = %d.\n",a,b,s);
}
/*
Enter the number a : 84
Enter the number b : 105
The sum of common factors of 84 and 105 is = 32.

Enter the number a : 24
Enter the number b : 36
The sum of common factors of 24 and 36 is = 28.

*/
