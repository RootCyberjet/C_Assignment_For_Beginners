int kld(int a,int b)
{
	int d,c=0,p;
	while(a>0)
	{
		d=a%10;
		c++;
		if(c==b)
		{
			p=d;
			a=0;
		}
		a=a/10;
	}
	return p;
}
