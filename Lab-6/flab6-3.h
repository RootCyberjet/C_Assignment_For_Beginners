int pbd(int n)
{
	int b=0,d,c=0,k;
	while(n>0)
	{
		d=n%10;
		if(d>b)
		{
			b=d;
			k=c+1;
		}
		c++;
		n=n/10;
	}
	return k;
}
