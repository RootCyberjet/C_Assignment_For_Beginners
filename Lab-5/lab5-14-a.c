#include<stdio.h>
void main()
{
	int i,j,n,k,x[100],y[100],S=0,s1;
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter the %d numbers x : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the %d numbers y : ",n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&y[j]);
	}
	for(k=1;k<=n;k++)
	{
		s1=x[k]*y[(n+1)-k];
		S=S+s1;
	}
	printf("The required sum of is = %d.\n",S);
}
/*
Enter the number of numbers to be entered : 5
Enter the 5 numbers x : 1 2 3 4 5
Enter the 5 numbers y : 10 8 6 4 2
The required sum of is = 110.

Enter the number of numbers to be entered : 7
Enter the 7 numbers x : 12 34 23 13 45 20 10
Enter the 7 numbers y : 2 15 7 9 11 9 8
The required sum of is = 1407.

*/
