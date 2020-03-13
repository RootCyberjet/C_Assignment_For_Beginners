#include<stdio.h>
void main()
{
	int N=0,a,X,M,d,e,f;
	printf("Enter the number X : ");
	scanf("%d",&X);
	M=X;
	while(X>0)
	{
		a=X%10;
		N=N*10+a;
		X=X/10;
	}
	do
	{
		d=N%10;
		e=N/10;
		f=e%10;
		N=N/10;
	}while(d%2!=0);
	printf("The digit in %d immediately after the first even digit is %d.",M,f);
}
/*Enter the number X : 354359
The digit in 354359 immediately after the first even digit is 3.

Enter the number X : 53496
The digit in 53496 immediately after the first even digit is 9.*/
