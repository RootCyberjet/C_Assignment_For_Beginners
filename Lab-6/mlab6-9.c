#include<stdio.h>
#include"flab6-9.h"
void main()
{
	int n,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	s=spd(n);
	printf("The sum of prime digits of %d is = %d.\n",n,s);
}
/*
Enter the number : 3463578
The sum of prime digits of 3463578 is = 18.

Enter the number : 45763
The sum of prime digits of 45763 is = 15.

Enter the number : 64086
The sum of prime digits of 64086 is = 0.

*/
