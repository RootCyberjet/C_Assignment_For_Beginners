int spd(int n)
{
	int c,s=0,i,d;
	while(n>0)
	{
		d=n%10;
		c=0;
		for(i=2;i<=d;i++)
		{
			if(d%i==0)
			{
				c++;
			}
		}
		if(c==1)
		{
			s=s+d;
		}
		n=n/10;
	}
	return s;
}
