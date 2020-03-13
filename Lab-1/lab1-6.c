#include<stdio.h>
void main()
{
	int N,q,d,b=0,k,c=0,p;
	printf("Enter the number N : ");
	scanf("%d",&N);
	q=N;
	while(N>0)
	{
		d=N%10;
		if(d>=b)
		{
			b=d;
			k=c+1;
		}
		c=c+1;		
		N=N/10;
	}
	p=(c-k)+1;
	printf("The biggest digit in %d is = %d.\nIts position from beginning is = %d.\n",q,b,p);
}

/*
Enter the number N : 49562
The biggest digit in 49562 is = 9.
Its position from beginning is = 2.

Enter the number N : 937499
The biggest digit in 937499 is = 9.
Its position from beginning is = 1.

Enter the number N : 465389
The biggest digit in 465389 is = 9.
Its position from beginning is = 6.

*/
