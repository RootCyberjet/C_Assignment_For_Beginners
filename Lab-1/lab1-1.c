#include<stdio.h>
main()
{
	int d,b,c,e,f,X;
	printf("Enter the number X : ");
	scanf("%d",&X);
		d=X%10;
		b=X/10;
		c=b%10;
		e=X/100;
		f=(e*100)+(2*c*10)+d;
		printf("The required output of %d is %d.",X,f);
}
