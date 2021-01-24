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
int main()
{
	int a[10];
	printf("%d\n",((int)(&a+1)-(int)(&a))/((int)(a+1)-(int)(a)));

	// int *b=malloc(4*10);
	// printf("%d\n",((int)(&b+1)-(int)(&b))/((int)(b+1)-(int)(b)));

	int b=10;
	printf("%d %d\n",sizeof b,sizeof(b));
	printf("%d %d\n",sizeof 10,sizeof(10));
	printf("%d\n",sizeof(int));  // sizeof int -> Error
	
	printf("Size of Short: %d\n",sizeof(short));
	printf("Size of Integer: %d\n",sizeof(int));	
	printf("Size of Unsigned: %d\n",sizeof(unsigned));
	printf("Size of Pointer: %d\n",sizeof(void*));
	printf("Size of Long: %d\n",sizeof(long));
	printf("Size of Long Long: %d\n",sizeof(long long));
	printf("Size of Float: %d\n",sizeof(float));
	printf("Size of Double: %d\n",sizeof(double));
	printf("Size of Long Double: %d\n",sizeof(long double));


	int (*c)[10];
	int *d[10];
	int e[10];
	printf("%d %d %d %d\n",sizeof(c),sizeof(d),sizeof(e),sizeof(&e));

	printf("%d\n",sizeof 5);


	// Can't apply sizeof to bitfield
}


