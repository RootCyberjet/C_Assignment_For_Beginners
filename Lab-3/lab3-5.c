#include<stdio.h>
void main()
{
	int X,Y,i;
	printf("Enter first number X : ");
	scanf("%d",&X);
	printf("Enter second number Y : ");
	scanf("%d",&Y);
	printf("The common factors are : ");
	for(i=2;i<X;i++)
	{
		if(X%i==0 && Y%i==0)
		{
			printf("%d\t",i);
		}
	}
}
