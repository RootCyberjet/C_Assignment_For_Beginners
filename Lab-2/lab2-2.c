#include<stdio.h>
void main()
{
	int K,N,M,d,E,c=0;
	printf("Enter the value K : ");
	scanf("%d",&K);
	printf("Enter the number N : ");
	scanf("%d",&N);
	M=N;
	do
	{
		d=N%10;
		if(d%2==0)
		{
			E=d;
			c++;
		}
		N=N/10;
	}while(c!=K);
	printf("The %d-th even digit from last in %d is %d.",K,M,E);
}
