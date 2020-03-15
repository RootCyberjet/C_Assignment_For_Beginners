#include<stdio.h>
void main()
{
	int i,j,n,k,l,q,m,x[100],y[100],p=0,r=0,S1=0,S2=0,s1,s2=0;
	printf("Enter the number of numbers to be entered : ");
	scanf("%d",&n);
	printf("Enter the %d numbers x : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the %d numbers y : ",n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&y[j]);
	}
	for(k=1;k<=n;k++)
	{
		s1=x[k]*y[(n+1)-k];
		S1=S1+s1;
	}
	for(m=1;m<=n;m++)
	{
		s2=s2+y[m];
	}
	for(l=1;l<=n;l++)
	{
		p=p+x[l];
		q=s2-r;
		S2=S2+(p*q);
		r=r+y[l];
	}
	printf("The required sum of (a) is = %d",S1);
	printf("\nThe required sum of (b) is = %d",S2);
}
