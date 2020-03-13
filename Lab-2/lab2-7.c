#include<stdio.h>
void main()
{
	int n,i,x,S=0;
	float A,c=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	printf("Enter %d number : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2!=0)
		{
			S=S+x;
			c++;
		}
	}
	A=S/c;
	printf("The average of odd numbers is = %f.\n",A);
}
/*
Enter the value n : 5
Enter 5 number : 33 100 77 42 12
The average of odd numbers is = 55.000000.

Enter the value n : 7
Enter 7 number : 12 56 89 11 24 13 23
The average of odd numbers is = 34.000000.

Enter the value n : 10
Enter 10 number : 1 2 3 4 5 6 7 8 9 10
The average of odd numbers is = 5.000000.
*/
