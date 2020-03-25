int bd(int n)
{
	int d,b=0;
	while(n>0)
	{
		d=n%10;
		if(d>b)
		{
			b=d;
		}
		n=n/10;
	}
	return b;
}
