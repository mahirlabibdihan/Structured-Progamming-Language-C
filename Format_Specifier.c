// The format specifiers are used in C for input and output purposes. Using this concept the compiler can understand that what type of data is in a variable during taking input using the scanf() function and printing using printf() function. Here is a list of format specifiers.

// It is used in variadic funnctions like printf,scanf,fprintf,fscanf,sprintf,sscanf . Format specifiers have no meaning in a string unless the string is passed to variadic function . Variadic Function searches for % in the string and on the basis of the characters after % it can understand what type of data it needs to work with .

#include<stdio.h>
#include<stdarg.h>


// %c -> Character
// %hi -> Short Integer
// %hu -> Unsigned Short Integer
// %d -> Decimal
// %ld %li -> Long Integer
// %lld -%lli > Long Long Integer
// %u -> Unsigned Integer
// %lu -> Unsigned Long Integer
// %llu -> Unsigned Long Long Integer
// %i -> Integer
// %f -> Floating
// %lf -> Double
// %Lf -> Long Double
// %e %E -> Exponential
// %g %G -> Smaller between %g and %f
// %o -> Octal
// %x %X -> Hexadecimal
// %p -> Pointer
// %s -> String
// %n -> Prints nothing
// %% -> Prints % character


// Format specifiers contain maximum 3 characters .
// l , L , h are prefix
// i , d , f , c , o , x , e , g , u , s are postfix
int main()
{

}




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
