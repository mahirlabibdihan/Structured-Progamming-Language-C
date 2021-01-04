#include<stdio.h>
// Literal : Constant Values

// Integer Literal : (4 bytes)
// Spaces are not allowed
// Default Type : int
// Prefix : 0 , 0x
// Suffix : u/U , l/L
// 191		// Decimal-Literal // int
// 0b101 , 0B101     // Binary-Literal
// 019		// Octal-Literal
// 0x15	, 0X4a , 0x4A	// Hex-Literal
// 191l , 191L		// long
// 191ll , 191LL    // long long
// 191u , 191U		// unsigned int
// 191ul , 191lu , 191UL , 191LU ,    // unsigned long
// 191ull , 191ULL ,	// unsigned long long




// Floating-point Literal :
// Default Type : double (8 bytes)
// Suffix : L
// You can represent floating point literals either in decimal form or exponential form.
// Spaces are not allowed
// 3.1416 , -3,1416 ,+3.1416    // decimal form     // double
// 31416e-4 , 31416E-4     // exponential form  // [+/-] <Mantissa> <e/E> [+/-] <Exponent>  
// 3.1416L    // long double
// 31416E      // invalid // incomplete exponent




// Character Literal :
// Default Type : int (4 bytes)
// Character literals are enclosed in single quotes.
// Prefix : L , U
// 'A'		// char
// '\07' 	// octal
// '\x4a'	// hexadecimal
// '\n'		// escape sequence
// 'ABCD'	   // multi-character character constant	// Max 4 char
// '\u02C0'    // Universal character



// String Literal :
// Default Type : char*
// String literals or constants are enclosed in double quotes .
// Prefix: u8 , L
// Spaces are allowed

// "hello, dear"

// "hello, \
// dear"

// "hello, " "d" "ear"
// All the three forms are identical strings.



// Compound Literals
// Array : (int[]){ ... }
int *p=(int[]){1,2,3};
// Structure : (struct S){ ... }
struct S{
	int a,b;
};

struct S *a=&((struct S){1,2});
int main()
{

	int *p=&((int){10});	// Address of Non-string Literal .

	char *c ="Dihan" ;     // Address of String Literal

	printf("%d\n",*p);
	// Char vs String
	// 'b' : Ocuppies single byte
	// "b"{'b','\0'} : Ocuppies two bytes

	

	// Multi-character character constant : 4 bytes . So it can contain maximum 4 bytes .
	// 
	// Bitpattern: 'ABCD'
	//               A: 01000001    B: 01000010    C: 01000011    D: 01000100
    // 					   ^			  ^			     ^				^
	// 			           |			  |				 |				|
	// 'ABCD' : 		01000001	   01000010 	  01000011		 01000100
	// 'ABCD' : 01000001010000100100001101000100 -> (1094861636)
	printf("%d\n",'ABCD');
	// When we assign a multi-character to char variable it will assign only the first(from right) 8 bits(1 byte) to the char variable (as sizeof char is 1 byte), means the last character of multi-character will be assigned to the character variable .

	int d='ABCD';  // d = 'D'
	printf("%c\n",d);  // Output : D


	printf("%d %d %d\n",sizeof(d),sizeof('a'),sizeof(L'a'));


}