/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/
#include<stdio.h>
// A return statement ends the execution of a function, and returns control to the calling function. 

// A return statement can return only one value to the calling function.

// default return type of a function is int

// if we don't return a value in a non-void function , it will be a undefined behaviour . The function will return any value . But the default return value of main() function is 0 .
int Return()
{

}

void Void()
{

}

int Func()
{
	return 1,2,3;	// WIll return the rightmost value
}
int main()
{
	printf("%d\n",Return());   // Any number

	// printf("%d",Void());	// Invalid

	printf("%d\n",Func());	// 3


// Return Value of Library functions on failure :
// gets() : NULL
// fgets() : NULL
// puts() : EOF
// scanf() : EOF 
// printf() : Negative Number
// getc() : EOF 

}