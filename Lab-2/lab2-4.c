#include<stdio.h>
void main()
{
	int n,i,N,d,e,f,S=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&N);
		d=N%10;
		e=N/10;
		f=e%10;
		S=S+f;
	}
	printf("The required output is %d.",S);
}
