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
	s=x[1];
	for(j=2;j<=n;j++)
	{
		s=s-x[j];
	}
	printf("The required sum = %d.",s);
}
