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
	if(c==2)
	{
		printf("The number %d is a prime number.\n",N);
	}
	else
	{
		printf("The number %d is not a prime number.\n",N);
	}
}
/*
Enter the number N : 123
The number 123 is not a prime number.

Enter the number N : 457
The number 457 is a prime number.

Enter the number N : 341
The number 341 is not a prime number.

*/
