// The format specifiers are used in C for input and output purposes. Using this concept the compiler can understand that what type of data is in a variable during taking input using the scanf() function and printing using printf() function. Here is a list of format specifiers.

// It is used in variadic funnctions like printf,scanf,fprintf,fscanf,sprintf,sscanf . Format specifiers have no meaning in a string unless the string is passed to variadic function . Variadic Function searches for % in the string and on the basis of the characters after % it can understand what type of data it needs to work with .

#include<stdio.h>
#include<stdarg.h>
// int printf ( const char * format, ... );
// int scanf ( const char * format, ... );
// %[flags][width][.precision][length]specifier, 


// Specifiers :
// c -> Character
// i -> Integer
// u -> Unsigned
// d -> Decimal
// f -> Floating (Lowercase)
// F -> FLoating (Uppercase)
// e -> Scientific Notation (Lowercase)
// E -> Scientific Notation (Uppercase)
// g -> Shortest representation between %e and %f
// G -> Shortest representation between %E and %F
// o -> Octal
// x -> Hexadecimal (Lowercase)
// X -> Hexadecimal (Uppercase)
// p -> Pointer Address
// s -> Array of characters



// Format specifiers contain maximum 3 characters .
// l , L , h are prefix
// i , d , f , c , o , x , e , g , u , s are postfix
int main()
{

}

/*
A format specification has the following form:

>>-%--+---+--+-------+--+----+--type---------------------------><
      '-*-'  '-width-'  +-h--+
                        +-L--+
                        +-l--+
                        +-ll-+
                        +-H--+
                        +-D--+
                        '-DD-'

*/


// void Printf(const char *fmt, ...)
// {
//     va_list ap;
//     const char *p;
//     int i;

//     va_start(ap, fmt);
//     for (p = fmt; *p; p++)
//     {
//         if (*p != '%')
//         {
//             putchar(*p);
//             continue;
//         }

//         switch(*p)
//         {
//         	while(p++)
//         	{
//         		if(*p=='i'||*p=='c'||*p=='d'||*p=='u'||*p=='f'||*p=='o'||*p=='x'||*p=='e'||*p=='p') break;
//         	}
//         }
//     }

//     va_end(ap);
// }
