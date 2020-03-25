#include<stdio.h>
#include"flab6-5.h"
void main()
{
	int a,b,s;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	s=lcm(a,b);
	printf("The least common multiple of %d and %d is = %d.\n",a,b,s);
}
/*
Enter the number a : 24
Enter the number b : 36
The least common multiple of 24 and 36 is = 72.

Enter the number a : 7
Enter the number b : 8
The least common multiple of 7 and 8 is = 56.

*/
