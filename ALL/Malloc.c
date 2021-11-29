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
#include <stdlib.h>
#include <string.h>
// Malloc returns a void* pointer to a block of memory stored in heap .

void* malloc(size_t size);
int main()
{
	int *a=(int*)malloc(sizeof(int)*0);

	// To store writable string 
	// int *Name = "Dihan" ; // Incorrect  // Read only . 
	char *Name=(char*)malloc(sizeof(char)*(strlen("Dihan")+1));		// 
	strcpy(Name,"Dihan");
	free(a);   // Frees heap objects , not array objects .

	// What if negative number is passed to malloc ?
	// Malloc takes size_t value . Since size_t is a unsigned integer , the negative integer will be converted to corresponding unsigned int .


	// 2D Array : 4 X 10
	int r=4,c=10;

	// Allocate
	int **x=(int**)malloc(sizeof(int*)*r);
	int i;
	for(i=0;i<r;i++)
	{
		*(x+i)=(int*)malloc(sizeof(int)*c);
	}

	// Free
	for(i=0;i<r;i++)
	{
		free(*(x+i));
	}
	free(x);

}