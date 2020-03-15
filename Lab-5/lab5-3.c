#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,s,S=0,m,k;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<n;j++)
	{
		s=x[j]+x[j+1];
		m=1;
		for(k=1;k<=j;k++)
		{
			m=m*s;
		}
		S=S+m;
	}
	printf("The sum of the series is = %d.",S);
}
