#include<stdio.h>
#include<math.h>
void main()
{
	float L,B,A,a,b,c;
	printf("Enter the value a : ");
	scanf("%f",&a);
	printf("Enter the value b : ");
	scanf("%f",&b);
	printf("Enter the value c : ");
	scanf("%f",&c);
	B=c/a;
	L=c/b;
	A=0.5*B*L;
	printf("The area of the triangle formed by the straight line (%f)x+(%f)y+(%f)=0 with the coordinate axes x and y is %f.",a,b,c,A);
}
