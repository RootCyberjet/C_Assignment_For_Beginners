#include<stdio.h>
void main()
{
	int N,d,K,p,R=0,c=0,s;
	printf("Enter the number N : ");
	scanf("%d",&N);
	s=N;
	while(N>0)
	{
		d=N%10;
		R=d+(R*10);
		N=N/10;
	}
	while(R>0)
	{
		p=R%10;
		c++;
		if(p%2==0)
		{
			K=p;
			R=0;
		}
		R=R/10;
	}
	printf("The first even digit of %d from the beginning is = %d.\nIts corresponding position from beginning is = %d.\n",s,K,c);
}
/*
Enter the number N : 56128
The first even digit of 56128 from the beginning is = 6.
Its corresponding position from beginning is = 2.

Enter the number N : 973641
The first even digit of 973641 from the beginning is = 6.
Its corresponding position from beginning is = 4.

Enter the number N : 572513
The first even digit of 572513 from the beginning is = 2.
Its corresponding position from beginning is = 3.

*/
