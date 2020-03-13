#include<stdio.h>
void main()
{
	int n,s,t,x,i,S=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	printf("Enter the value s : ");
	scanf("%d",&s);
	printf("Enter the value t : ");
	scanf("%d",&t);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(s<=x&&x<=t)
		{
			S=S+x;
		}
	}
	printf("The required sum is = %d.\n",S);
}
/*
Enter the value n : 5
Enter the value s : 30
Enter the value t : 90
Enter 5 numbers : 33 100 77 42 12
The required sum is = 152.

Enter the value n : 10
Enter the value s : 1  
Enter the value t : 10
Enter 10 numbers : 1 2 3 4 5 6 7 8 9 10
The required sum is = 55.

Enter the value n : 8
Enter the value s : 100
Enter the value t : 150
Enter 8 numbers : 123 113 453 678 32 90 111 151
The required sum is = 347.

*/
