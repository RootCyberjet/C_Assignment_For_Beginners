#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,s,d=1;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	s=x[1];
	for(j=2;j<=n;j++)
	{
		d=d*(-1);
		s=s+(d*x[j]);
	}
	printf("The required sum is = %d.\n",s);
}
/*
Enter the number of numbers to be entered n : 7
Enter 7 numbers : 4 5 2 5 6 4 7
The required sum is = 5.

Enter the number of numbers to be entered n : 10
Enter 10 numbers : 1 3 45 23 13 7 56 8 10 9
The required sum is = 75.

*/
