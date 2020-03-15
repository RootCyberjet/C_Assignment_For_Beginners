#include<stdio.h>
void main()
{
	int n,i,j,x[100],p;
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<n;j++)
	{
		if(x[j]%2!=0 && x[j+1]%2!=0)
		{
			p=j;
			j=n;
		}
	}
	printf("The smallest i such that xi and x(i+1) both odd is = %d.",p);
}
