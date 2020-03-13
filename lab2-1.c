#include<stdio.h>
void main()
{
	int N,M,T,d,e=0,c=0,f,k,j=0,b=0,B; 
	printf("Enter the number N : ");
	scanf("%d",&N);
	M=N;
	T=N;
	while(N>0)
	{
		d=N%10;
		e=e*10+d;
		c++;
		N=N/10;
	}
	while(M>0)
	{
		f=M%10;
		if(f>b)
		{
			b=f;
			k=j+1;
		}
		M=M/10;
		j++;
	}
	B=(c-k)+1;
	printf("The reverse number of %d is %d and biggest digit in %d is %d and its position from last is %d and its position from beginning is %d.",T,e,T,b,k,B);
}
