#include <stdio.h>

int main()
{
	int a=1,b=10,c=10;

	a=b=c;	// Right to left
	a==b==c;   // Left to right

	printf("%d\n",a==b==c);
}