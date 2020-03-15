#include<stdio.h>
void main()
{
	int n,i,j,x[100];
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter the %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("The local maximas are :");
	for(j=2;j<n;j++)
	{
		if(x[j-1]<x[j] && x[j+1]<x[j])
		{
			printf("\t%d",x[j]);
		}
	}
	printf("\n");
}
/*
Enter the number of numbers to be entered : 10
Enter the 10 numbers : 25 19 22 23 21 10 17 11 13 10
The local maximas are :	23	17	13

Enter the number of numbers to be entered : 7
Enter the 7 numbers : 13 11 14 34 25 30 10
The local maximas are :	34	30

*/
