/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/
#include <stdio.h>
 

// Generally we can't pass arguments to main() function . But we can , using commandline .
// Commandline Argument : Arguments passed to program  using commandline(Ex: CMD) during program execution . 
// Command : File_name.exe .....Arguments.....


// Since main() is the entry point of a program , arguments are converted into an array of character pointer and passed to main() function . Each character pointer refers to a argument .
// Prototype of main function : 
int main(int,char*[]);
int main(int argc,char *argv[]);	
// argc(Argument Counter) is the number of argument // argc>=1
// *argv[](Argument Vector) is the list of arguments .
// argv[0] -> Name of the executable file , argv[1]-> First Argument ...... argv[argc-1] -> Last Argument .
// argv[argc] is a null pointer .



// Example : Commandline_Argument.exe Input.txt Ouput.txt
// argc = 3
// argv[0] = "Commandline_Argument.exe";
// argv[1] = "Input.txt"
// argv[2] = "Ouput.txt"


// If we want to use multiple words separated by whitespaces as a single argument , single quotes should be used .
// Example : Print.exe 'Hello World'
// argc = 2
// argv[0] = "Print.exe"
// argv[1] = "Hello World"

// Example : Print.exe Hello World
// argc = 3
// argv[0] = "Print.exe"
// argv[1] = "Hello"
// argv[2] = "World"

int main(int n,char *arg[]) 
{
	int i;
	if(n<2)
	{
		puts("No argument is passed.");
		return 0;
	}
	printf("List of arguments :\n");
	for(i=1;i<n;i++)
	{
		printf("%s\n",arg[i]);
	}
	return 0;
}