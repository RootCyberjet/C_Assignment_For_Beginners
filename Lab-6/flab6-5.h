int eld(int n)
{
	int d,e,f,g,h;
	d=n%10;
	e=n/10;
	f=e%10;
	g=e/10;
	h=(g*100)+(d*10)+f;
	return h;
}
