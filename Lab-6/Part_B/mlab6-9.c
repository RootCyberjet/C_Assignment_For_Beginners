#include<stdio.h>
#include"flab6-9.h"
void main()
{
	int n,k,p,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the value of k : ");
	scanf("%d",&k);
	printf("Enter the digit : ");
	scanf("%d",&p);
	s=rep(n,k,p);
	printf("The number after replacing %d-th last digit by the digit %d from %d is = %d.\n",k,p,n,s);
}
/*
Enter the number : 254565  
Enter the value of k : 3
Enter the digit : 8
The number after replacing 3-th last digit by the digit 8 from 254565 is = 254865.

Enter the number : 345785
Enter the value of k : 5
Enter the digit : 0
The number after replacing 5-th last digit by the digit 0 from 345785 is = 305785.

*/
