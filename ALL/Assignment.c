main()
{
	// '=' assignment operator
	int a=5,b=4,c=3;
	// Left side of '=' must be variable
	a=10;
	// lvalue can't have address operator
	// &a=10; // Invalid
	// (c>2?a:b)=10; //C++
	// Right side of '=' can be variable,constant,expression
	a=10;
	a=b;
	a=(b>0?10:20);
	a=b==c;

	a=b=c=10; // assignments done from right to left

	printf("%d %d %d\n",a,b,c);

	printf("%d\n",a=5);
	a=8,9,10;
	printf("%d\n",a);
	a=(8,9,10);
	printf("%d\n",a);
}