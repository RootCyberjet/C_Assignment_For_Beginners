#include<stdio.h>
void main()
{
	int A,B,L,i,p,M,g,e,f,h;
	printf("Enter the first number A : ");
	scanf("%d",&A);
	printf("Enter the second number B : ");
	scanf("%d",&B);
	L=A>B?A:B;
	for(i=1;i<=L;i++)
	{
		if(A%i==0 && B%i==0)
		{
			p=i;
			e=A/i;
			f=B/i;
			h=p*e*f;
		}
	}
	M=A*B;
	g=M/h;
	printf("The lcm(%d,%d) = %d and gcd(%d,%d) = %d.\n",A,B,h,A,B,g);
}
/*
Enter the first number A : 24
Enter the second number B : 54
The lcm(24,54) = 216 and gcd(24,54) = 6.

Enter the first number A : 36
Enter the second number B : 37
The lcm(36,37) = 1332 and gcd(36,37) = 1.

Enter the first number A : 45
Enter the second number B : 30
The lcm(45,30) = 90 and gcd(45,30) = 15.
*/
