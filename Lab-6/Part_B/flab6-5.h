int lcm(int a,int b)
{
	int i,p,A,B,l;
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			p=i;
		}
	}
	A=a/p;
	B=b/p;
	l=p*A*B;
	return l;
}
