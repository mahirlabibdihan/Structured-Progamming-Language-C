#include <stdio.h>

void Dihan();	// An empty parameter list simply says that no parameter information is given. Any number of arguments can be passed to the function .
void Takla(void);  // Takes no argument

void Nahid(a,b,c)
int a,b,c;
{
	
}
int main()
{
	Dihan(5,6,7);   // Any number of argument can be provided
}

void Dihan(int a,int b)
{
	printf("%d %d\n",a,b);
}