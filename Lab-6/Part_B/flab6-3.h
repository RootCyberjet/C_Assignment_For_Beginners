int scf(int a,int b)
{
	int i=2,p,c=0;
	do
	{
		if(a%i==0 && b%i==0)
		{
			p=i;
			c++;
		}
		i++;
	}while(c!=1);
	return p;
}
