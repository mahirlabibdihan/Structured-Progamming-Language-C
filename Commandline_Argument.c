#include <stdio.h>
 
// Commandline Argument : Arguments passed to program  using commandline during program execution . 
// Command : File_name.exe .....Arguments.....


// Since main() is the entry point of a program , arguments are converted into an array of strings and passed to main() function . Each string is a argument .
// Prototype of main function : 
int main(int n,char *arg[]);
// n is the number of argument
// *arg[] is the array of arguments .
// arg[0] -> Name of the executable file , arg[1]-> First Argument ...... arg[n-1] -> Last Argument .
// 

int main(int n,char *arg[]) 
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("%s\n",arg[i]);
	}
	return 0;
}