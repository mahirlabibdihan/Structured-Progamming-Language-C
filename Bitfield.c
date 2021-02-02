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
// A bit-field must be a member of a structure or union.

// Bitfield  :  Allocate memory to variables as our wish .


// type_name variable_name: width;
// Type of bitfield can't be floating type.
// Width of bitfield cannot exceed its type . width<=sizeof(type)
struct BitField1{
	unsigned a:4;   // size of a is 4 Bit
}Bit1;


// Variable name is optional . But we cannot access the field without name
// type_name : width;
struct BitField2{
	int:1;
	signed a:4;   // size of a is 4 Bit
}Bit2;

// sizeof() can't be applied to bitfields
// We can't take input to bitfields from user . But We can assign to bitfields .
// Can not take address of Bit-Field


// It is valid to mix normal structure members with bit-fields.


// Bit-fields cannot be arrayed.
typedef struct 
{
	int Date: 5;
	int Month: 4;
	int Year: 23;
} Birthday;

struct test{
	unsigned a:1 , b:2 , c:3;
};


int main()
{
	Birthday Dihan={19,8,2020};
	printf("%d\n",sizeof(Dihan));
	int i;
	struct test x;

	for(i=0;i<8;i++)
	{
		x.a=x.b=x.c=i;
		printf("%d %d %d\n",x.a,x.b,x.c);
	}
	puts("-----");
	for(i=0;i<8;i++)
	{
		x.c=x.b=x.a=i;
		printf("%d %d %d\n",x.a,x.b,x.c);
	}
}