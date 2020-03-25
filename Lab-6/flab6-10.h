int ied(int n)
{
	int d,e,f=0,t=1;
	while(n>0)
	{
		d=n%10;
		if(d%2==0)
		{
			e=d+1;
			d=e;
		}
		f=f+d*t;
		t=t*10;
		n=n/10;
	}
	return f;
}
