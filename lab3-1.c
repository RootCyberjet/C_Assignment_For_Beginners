#include<stdio.h>
void main()
{
	int N,i,S=0;
	printf("Enter the number N : ");
	scanf("%d",&N);
	for(i=2;i<=N;i++)	/* Except 1 */
	{
		if(N%i==0)
		{
			S=S+i;
		}
	}
	printf("The sum of all factors is = %d.",S);
}
