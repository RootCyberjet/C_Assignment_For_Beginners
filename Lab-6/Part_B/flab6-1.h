int ssf(int a,int b)
{
	int i,p,q,s,j;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			p=i;
			i=a;
		}
	}
	for(j=2;j<=b;j++)
	{
		if(b%j==0)
		{
			q=j;
			j=b;
		}
	}
	s=p+q;
	return s;
}
