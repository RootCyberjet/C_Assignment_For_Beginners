int led(int n)
{
	int d;
	do
	{
		d=n%10;
		n=n/10;
	}while(d%2!=0);
	return d;
}
