#include<stdio.h>
void main()
{
	int N,d;
	printf("Enter the number N : ");
	scanf("%d",&N);
	printf("The required digits which are multiple of 3 is : ");
	while(N>0)
	{
		d=N%10;
		if(d%3==0)
		{
		   printf("%d\t",d);
	    }
		N=N/10;
	}
}
