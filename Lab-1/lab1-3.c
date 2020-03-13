#include<stdio.h>
main()
{
	int N,d,k,R=0,P;
	printf("Enter the number N : ");
	scanf("%d",&N);
	P=N;
	while(N>0)
	{
		d=N%10;
		R=d+(R*10);
		N=N/10;
		k=d;
	}
	printf("The reverse number of %d is %d and first digit of input number is %d.",P,R,k);
}
