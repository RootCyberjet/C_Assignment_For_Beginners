#include<stdio.h>
void main()
{
	int i,j,k,l,n,x[100],p,q,r,a,b;
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter the %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=1;j<n;j++)
	{
		for(k=1;k<=(n-j);k++)
		{
			if(x[k]>x[k+1])
			{
				a=x[k];
				x[k]=x[k+1];
				x[k+1]=a;
			}
		}
	}
	printf("The increasing order is :");
	for(l=1;l<=n;l++)
	{
		printf("\t%d",x[l]);
	}
	for(p=1;p<n;p++)
	{
		for(q=1;q<=(n-p);q++)
		{
			if(x[q]<x[q+1])
			{
				b=x[q];
				x[q]=x[q+1];
				x[q+1]=b;
			}
		}
	}
	printf("\nThe decreasing order is :");
	for(r=1;r<=n;r++)
	{
		printf("\t%d",x[r]);
	}
	printf("\n");
}
/*
Enter the number of numbers to be entered : 5
Enter the 5 numbers : 23 67 45 13 7
The increasing order is :	7	13	23	45	67
The decreasing order is :	67	45	23	13	7

Enter the number of numbers to be entered : 7
Enter the 7 numbers : 25 345 213 999 2 13 23
The increasing order is :	2	13	23	25	213	345	999
The decreasing order is :	999	345	213	25	23	13	2

Enter the number of numbers to be entered : 6
Enter the 6 numbers : 23 234 123 567 999 0
The increasing order is :	0	23	123	234	567	999
The decreasing order is :	999	567	234	123	23	0

*/
