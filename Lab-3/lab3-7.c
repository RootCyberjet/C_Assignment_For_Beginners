#include<stdio.h>
void main()
{
	int X,Y,i,k,j=0,c=0;
	printf("Enter the first number X : ");
	scanf("%d",&X);
	printf("Enter the second number Y : ");
	scanf("%d",&Y);
	for(i=1;i<=X;i++)
	{
		if(X%i==0 && Y%i==0)
		{
			c++;
		}
	}
		if(c==1)
		{
			printf("The smallest common factor of %d and %d is = 1.\n",X,Y);
		}
		else
		{
			for(i=2;i<=X;i++)
			{
				if(X%i==0 && Y%i==0)
				{
					k=i;
					j++;
				}
				if(j==1)
				{
					i=X;
				}
			}
			printf("The smallest common factor of %d and %d is = %d.\n",X,Y,k);
		}
}
/*
Enter the first number X : 26
Enter the second number Y : 13
The smallest common factor of 26 and 13 is = 13.

Enter the first number X : 34
Enter the second number Y : 23
The smallest common factor of 34 and 23 is = 1.

Enter the first number X : 24
Enter the second number Y : 54
The smallest common factor of 24 and 54 is = 2.
*/
