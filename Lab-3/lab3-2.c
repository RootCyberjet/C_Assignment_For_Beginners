#include<stdio.h>
void main()
{
	int N,i,c=0;
	printf("Enter the number N : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(N%i==0)
		{
			c++;
		}
	}
	printf("The number of factors is = %d.",c);
}
