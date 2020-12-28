#include<stdio.h>
// void as the return type of function means the function doesn,t return any value .
// void as the function parameter means the function doesn't take any argument
// void* is a universal pointer // Can also point to funtion , structure .
 
int main()
{
	int a=10;
	void *b=&a; // Correct --> No error/warning as it is a universal pointer . It can point to any data type variable.
	char *c=&a; // Incorrect --> char* can only point to char variable .

	// *b=9; // printf("%d",*b); //invalid // A void* pointer cannot be dereferenced unless it is cast to another type .
}