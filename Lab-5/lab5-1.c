#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,s=1;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<=(n-2);j++)
	{
		s=s*(x[j]+x[j+2]);
	}
	printf("The required product is = %d.",s);
}
