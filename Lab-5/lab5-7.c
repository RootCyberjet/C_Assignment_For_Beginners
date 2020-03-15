#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,s=0,k;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	k=n;
	for(j=1;j<=n;j=j+2)
	{
		s=s+(x[j]*x[k]);
		k=k-1;
	}
	printf("The required sum is = %d.",s);
}
