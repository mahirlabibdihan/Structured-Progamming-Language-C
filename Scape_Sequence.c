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

// \a -> 7	Alarm or Beep
// \b -> 8	Backspace
// \t -> 9	Tab (Horizontal)
// \n -> 10 New Line
// \v -> 11 Vertical Tab
// \f -> 12	Form Feed
// \r -> 13 Carriage Return (It will work when printing in terminal. If we write it in file it will work as new line.)


// \OOO (octal-> O = [0 ... 7])
// \xHH (hex-> H = [0 ... f])
// \\ , \' , \" , \?

#include<stdio.h>
int main()
{
	printf("%c",'\f');
}