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

typedef struct 
{
	int Date: 5;
	int Month: 4;
	int Year: 23;
} Birthday;

struct test{
	unsigned a:1 , b:2 , c:3;
};


int main()
{
	Birthday Dihan={19,8,2020};
	printf("%d\n",sizeof(Dihan));
	int i;
	struct test x;

	for(i=0;i<8;i++)
	{
		x.a=x.b=x.c=i;
		printf("%d %d %d\n",x.a,x.b,x.c);
	}
	puts("-----");
	for(i=0;i<8;i++)
	{
		x.c=x.b=x.a=i;
		printf("%d %d %d\n",x.a,x.b,x.c);
	}
}