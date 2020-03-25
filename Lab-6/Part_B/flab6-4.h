int gcf(int a,int b)
{
	int i=2,p;
	while(i<a)
	{
		if(a%i==0 && b%i==0)
		{
			p=i;
		}
		i++;
	}
	return p;
}
