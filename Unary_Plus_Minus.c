#include<stdio.h>

#define FOO

// #if FOO>0   // If FOO is undefined, the C language requires it be replaced by 0 in this case.But will give compile error if FOO was defined with an empty definition

#if FOO+0>0   // Won't give any compile error
#endif
int main()
{
	short a;

	// If we use unary plus/minus , variables lower than integer are promoted to int 
	printf("%d %d %d\n",sizeof(a),sizeof(+a),sizeof(-a));


	// Turns lvalue to rvalue
	// +a=a;
	// +a+=a;
	// a=++(+a); 
	// a=(+a)++; //compile error
}