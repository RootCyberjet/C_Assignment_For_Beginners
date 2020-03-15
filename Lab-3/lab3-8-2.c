#include<stdio.h>
void main()
{
	int N,k,d,p,i=2,c=0;
	printf("Enter the number N : ");
	scanf("%d",&N);
	printf("Enter the value k : ");
	scanf("%d",&k);
	do
	{
		d=N%i;
		if(d==0)
		{
			p=i;
			c++;
		}
		i++;
	}while(c!=k);
	printf("The %d-th factor of %d is = %d.\n",k,N,p);
}
/*
Enter the number N : 123 
Enter the value k : 3
The 3-th factor of 123 is = 123.

Enter the number N : 36
Enter the value k : 4
The 4-th factor of 36 is = 6.

Enter the number N : 4542
Enter the value k : 5
The 5-th factor of 4542 is = 1514.
*/
