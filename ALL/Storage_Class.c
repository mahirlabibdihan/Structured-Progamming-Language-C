/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

// Types:

// Storage Class        KeyWord         Default Value       Storage         Scope               Life
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// Automatic            auto            Garbage             RAM             Function,Block      Till the execution of block or function in which it is declared
// Register             register        Garbage             Register        Function,Block      Till the execution of block or function in which it is declared				
// Static               static          0(zero)             RAM             Function,Block      Till the end of program
// External             extern          0(zero)             RAM             Program             Till the end of program

// Static and Extern can be declared globally
// Static , Auto and Register can be declared locally

// Static variable can't be declared inside a structure .

#include<stdio.h>

int A;   //Default storage class of global variable is External.
extern int B;  //External storage class  // To link external variable 

static int c;  // Internal Variable //A static global variable is a global variable that can only be accessed by functions in the same C program file as the variable.  // file scope // No external linkage possible
int F()
{
	static int d=0; //static variable will be created and initialized only once in a program. No matter how many times it is been declared.
	
	d++;
	return d;

}
int main()
{
	
	int a;  //default storage class of local variable is Automatic.
	auto int b; // Automatic Storage Class // Same as int a.
	register int c;  // Register Storage Class
	// Register storage class is same as Automatic Storage class. But it stores variable in thr Register and takes less time in code execution compared to Automatic.
	// But we can not declare all varible as Register variables. Because size of register is small .

	// extern int b=10;   // Extern variables can't be modified
	extern int A;

	int B=10;
	A=10;
	


	static int d;   // Static Storage Class // Default value 0.

	printf("%d\n",F());
	printf("%d\n",F());
}