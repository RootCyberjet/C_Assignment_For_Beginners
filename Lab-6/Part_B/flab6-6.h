int dkl(int a,int b)
{
	int d,c=0,e=0,t=1;
	while(a>0)
	{
		d=a%10;
		c++;
		if(c!=b)
		{
			e=e+t*d;
			t=t*10;
		}
		a=a/10;
	}
	return e;
}
