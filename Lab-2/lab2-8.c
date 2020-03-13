#include<stdio.h>
void main()
{
	int n,i,x,M=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			M=M+(i*x);
		}
	}
	printf("The weighted sum of even numbers is = %d.\n",M);
}
/*
Enter the value n : 5
Enter 5 numbers : 33 100 77 42 12
The weighted sum of even numbers is = 428.

Enter the value n : 8
Enter 8 numbers : 12 56 3 241 76 3 41 13
The weighted sum of even numbers is = 504.

Enter the value n : 10
Enter 10 numbers : 1 2 3 4 5 6 7 8 9 10
The weighted sum of even numbers is = 220.
*/
