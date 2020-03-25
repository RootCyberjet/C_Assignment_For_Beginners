int rep(int a,int b,int c)
{
	int d,k=0,e=0,t=1;
	while(a>0)
	{
		d=a%10;
		k++;
		if(k==b)
		{
			d=c;
		}
		e=e+d*t;
		t=t*10;
		a=a/10;
	}
	return e;
}
