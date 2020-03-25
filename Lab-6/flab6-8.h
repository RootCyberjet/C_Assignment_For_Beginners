int dmt(int n)
{
	int d,p;
	while(n>0)
	{
		d=n%10;
		if(d%2==0)
		{
			p=d;
		}
		n=n/10;
	}
	return p;
}
