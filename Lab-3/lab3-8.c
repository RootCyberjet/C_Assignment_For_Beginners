#include<stdio.h>
void main()
{
	int N,k,i,c=0,count=0,p;
	printf("Enter the number N : ");
	scanf("%d",&N);
	printf("Enter the value k : ");
	scanf("%d",&k);
	for(i=2;i<=N;i++)
	{
		if(N%i==0)
		{
			c++;
		}
		if(c==k)
		{
			p=i;
			i=N;
			count++;
		}
	}
	if(count == 1)
	{
		printf("The %d-th factor of %d is = %d.\n",k,N,p);
	}
	else
	{
		printf("%d-th factor does't exist.\n",k);
	}
}

