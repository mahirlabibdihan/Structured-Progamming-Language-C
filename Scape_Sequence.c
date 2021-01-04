/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/
// An escape sequence is a sequence of characters that does not represent itself when used inside a character or string literal 

// \a -> 7
// \b -> 8
// \t -> 9
// \n -> 10
// \v -> 11
// \f -> 12
// \r -> 13


// \OOO (octal-> O = [0 ... 7])
// \xHH (hex-> H = [0 ... f])
// \\ , \' , \" , \?

#include<stdio.h>
int main()
{
	printf("%c",'\f');
}