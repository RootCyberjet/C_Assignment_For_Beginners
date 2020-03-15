#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,s;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	s=x[n];
	for(j=n-1;j>=1;j--)
	{
		s=x[j]-s;
	}
	printf("The required sum is = %d.",s);
}
