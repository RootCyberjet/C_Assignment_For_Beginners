#include<stdio.h>
main()
{
	int A,B,A1,B1,d,e,f,g,M;
	printf("Enter the first number A : ");
	scanf("%d",&A);
	printf("Enter the second number B : ");
	scanf("%d",&B);
	d=A%10;
	e=A/10;
	f=B%10;
	g=B/10;
	A1=(e*10)+f;
	B1=(g*10)+d;
	M=A1*B1;
	printf("The product of %d and %d after exchanging the last digit of %d and %d respectively is %d.",A1,B1,A,B,M);
}
