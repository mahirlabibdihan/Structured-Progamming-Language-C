main()
{
	// '=' assignment operator
	int a=5,b=4,c=3;
	// Left side of '=' must be variable
	a=10;
	// (c>2?a:b)=10; //C++
	// Right side of '=' can be variable,constant,expression
	a=10;
	a=b;
	a=(b>0?10:20);
	a=b==c;

	a=b=c=10; // assignments done from right to left

	printf("%d %d %d\n",a,b,c);

	printf("%d",a=5);
}