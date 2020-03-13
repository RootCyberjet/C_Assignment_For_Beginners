#include<stdio.h>
#include<math.h>
void main()
{
	float R;
	int a,b,c,x,y;
	printf("Enter the value a : ");
	scanf("%d",&a);
	printf("Enter the value b : ");
	scanf("%d",&b);
	printf("Enter the value c : ");
	scanf("%d",&c);
	R=pow(a*a+b*b-c,0.5);
	x=-a;
	y=-b;
	printf("The radius of given circle is R = %f and its center is at C(%d,%d).\n",R,x,y);
}
/*
Enter the value a : 1
Enter the value b : -3
Enter the value c : 7
The radius of given circle is R = 1.732051 and its center is at C(-1,3).

Enter the value a : -2
Enter the value b : 5
Enter the value c : 20
The radius of given circle is R = 3.000000 and its center is at C(2,-5).

Enter the value a : 4
Enter the value b : 5
Enter the value c : 36
The radius of given circle is R = 2.236068 and its center is at C(-4,-5).

*/
