#include<stdio.h>
void main()
{
	int X,Y,i,k;
	printf("Enter the first number X : ");
	scanf("%d",&X);
	printf("Enter the second number Y : ");
	scanf("%d",&Y);
	for(i=1;i<=X;i++)
	{
		if(X%i==0 && Y%i==0)
		{
			k=i;
		}
	}
	printf("The greatest common factor of %d and %d is = %d.\n",X,Y,k);
}
/*
Enter the first number X : 5
Enter the second number Y : 6
The greatest common factor of 5 and 6 is = 1.

Enter the first number X : 123
Enter the second number Y : 45
The greatest common factor of 123 and 45 is = 3.

Enter the first number X : 96
Enter the second number Y : 48
The greatest common factor of 96 and 48 is = 48.
*/
