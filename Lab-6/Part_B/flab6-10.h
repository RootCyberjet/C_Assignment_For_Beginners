int sm(int a,int b,int c)
{
	int d,s=0;
	while(a>0)
	{
		d=a%10;
		if(d>=b && d<=c)
		{
			s=s+d;
		}
		a=a/10;
	}
	return s;
}
