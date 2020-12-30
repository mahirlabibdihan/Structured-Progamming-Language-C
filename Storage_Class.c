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

int a;   //Default storage class of global variable is External.
extern int a;  //External storage class  // same as int a;  // Can be accessed by the functions in differenr C program file as variable .

static int e;  //A static global variable is a global variable that can only be accessed by functions in the same C program file as the variable.  // file scope

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