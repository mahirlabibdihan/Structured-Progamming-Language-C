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
#include<errno.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	// FILE* a=fopen("Error.txt","r");

	// if(!a)
	// {
	// 	perror("");
	// }

	long long n;
	scanf("%lld",&n);
	int *P=(int*)malloc(4*n);
	if(!P) 
	{
		int err=errno;
		printf("Error No : %d\n",errno);
		perror("Error1 ");	  // Prints to stdout
		printf("Error2 : %s\n",strerror(errno));		// Prints to stderror
		fprintf(stderr,"Error3 : %s\n",strerror(errno));		// Prints to stderror
	}
	else
	{
		puts("Allocated");
	}

}
