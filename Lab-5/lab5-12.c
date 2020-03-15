#include<stdio.h>
void main()
{
	int n,i,j,x[100],k,s=0,c;
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter the %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<=n;j++)
	{
		c=0;
		for(k=j+1;k<=n;k++)
		{
			if(x[j]>x[k])
			{
				c++;
			}
		}
		s=s+(x[j]*(c));
	}
	printf("The required weighted sum is = %d.\n",s);
}
/*
Enter the number of numbers to be entered : 11
Enter the 11 numbers : 25 19 22 23 21 12 10 17 11 13 10
The required weighted sum is = 916.

Enter the number of numbers to be entered : 5
Enter the 5 numbers : 17 23 24 13 11
The required weighted sum is = 141.

Enter the number of numbers to be entered : 7
Enter the 7 numbers : 34 23 12 76 34 22 13
The required weighted sum is = 523.

*/
