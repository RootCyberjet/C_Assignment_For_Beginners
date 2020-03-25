int omto(int a,int b)
{
	int d,s=0;
	while(a>0)
	{
		d=a%10;
		if(d>b)
		{
			s=s+d;
		}
		a=a/10;
	}
	return s;
}
