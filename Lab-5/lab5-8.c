#include<stdio.h>
#include<math.h>
void main()
{
	int n,x[100],i,j,l,m,k,s=0,S=0;
	printf("Enter the number of numbers to be entered n : ");
	scanf("%d",&n);
	printf("Enter the value of k : ");
	scanf("%d",&k);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<=n;j++)
	{
		s=s+x[j];
		m=1;
		for(l=1;l<=k;l++)
		{
			m=m*s;
		}
		S=S+m;
	}
	printf("The required sum is = %d.\n",S);
}
/*
Enter the number of numbers to be entered n : 7
Enter the value of k : 5
Enter 7 numbers : 4 5 2 5 6 4 7
The required sum is = 57440101.

Enter the number of numbers to be entered n : 5
Enter the value of k : 3
Enter 5 numbers : 4 8 1 7 3
The required sum is = 24156.

Enter the number of numbers to be entered n : 10
Enter the value of k : 1
Enter 10 numbers : 1 2 3 4 5 6 7 8 9 10
The required sum is = 220.

*/
