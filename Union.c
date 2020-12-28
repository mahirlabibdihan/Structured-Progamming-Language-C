#include<stdio.h>
// union union_name{
// Definition ;	
// ...
// ..
// }[one or more variables];

// Declarations are same as structure .

// Union allows to store different variables in the same memory location .
// Union can have many members . But only one member can contain a value at any given time .
// Size of union is the size of the largest member in the union .

union U1{
	int a;
	float b;
	char c;
}Var1={10};
// Maximum 1 element can be used to initialize a union variable .
// First element will be initialized


union U2{
	int a;
	float b;
	char c;
}Var2={.b=10};
// Any other element other than first one can also be initialized



int main()
{

	printf("%d %f %d\n",Var1.a,Var1.b,Var1.c);
	printf("%d %f %d\n",Var2.a,Var2.b,Var2.c);
	printf("%d\n",sizeof(Var1));

	union U3{
		int a;
		int b;
		int c;
	}Var3;

	Var3.a=10;
	printf("%d %d %d\n",Var3.a,Var3.b,Var3.c);
	// Variables of same data type will hold the same value . 
}