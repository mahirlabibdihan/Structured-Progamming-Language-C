#include <stdio.h>

int main()
{
	int c=10,a,b;

	c>10?a=c:(b=c);   // c>10?a=c:b=c;  // Error

	a=c>10?10:5;

	printf("%d %d %d\n",a,b,c);
}