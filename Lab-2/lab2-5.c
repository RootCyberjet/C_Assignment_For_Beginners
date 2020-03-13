#include<stdio.h>
void main()
{
	int n,x,i,d,e,f,S=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
			d=x%10;
			e=x/100;
			f=e*10+d;
		S=S+f;
	}
	printf("The sum of numbers after deleting 2nd last digit is %d.\n",S);
}
/*
Enter the value n : 5
Enter 5 numbers : 332 145 770 412 182
The sum of numbers after deleting 2nd last digit is 171.

Enter the value n : 3
Enter 3 numbers : 1231 45 712
The sum of numbers after deleting 2nd last digit is 198.

Enter the value n : 7
Enter 7 numbers : 234 45 13 23 567 98 12
The sum of numbers after deleting 2nd last digit is 102.

*/
