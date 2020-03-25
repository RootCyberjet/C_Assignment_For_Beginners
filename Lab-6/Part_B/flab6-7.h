int socf(int a,int b)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			s=s+i;
		}
	}
	return s;
}
