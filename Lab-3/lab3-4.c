#include<stdio.h>
void main()
{
	int N,i,k;
	printf("Enter the number N : ");
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{
		if(N%i==0)
		{
			k=i;
		}
	}
	printf("The biggest factor of %d othe than %d is %d.",N,N,k);
}
