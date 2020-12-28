// Types:

// Storage Class		KeyWord			Default Value		Storage			Scope				Life
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// Automatic			auto			Garbage				RAM				Function,Block		Till the execution of block or function in which it is declared
// Register				register		Garbage				Register		Function,Block		Till the execution of block or function in which it is declared				
// Static				static			0(zero)				RAM				Function,Block		Till the end of program
// External				extern			0(zero)				RAM				Global				Till the end of program

#include<stdio.h>
//Storage class of global variable is External.
extern int a;  //External storage class
int F()
{
	static int d; //static variable will be created only once in a program. No matter how many times it is been declared.
	d++;
	return d;

}
int main()
{
	int a;  //default storage class of local variable is Automatic.
	auto int b; //same as int a.
	register int c;
	// Register storage class is same as Automatic Storage class. But it takes less time in code execution compared to Automatic.
	// But we can not declare all varible as Register variables. Because size of register is small . 
	printf("%d\n",F());
	printf("%d\n",F());

}