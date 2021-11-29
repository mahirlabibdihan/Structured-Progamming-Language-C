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
#include <time>
// There are two primary uses for structure pointers: to pass a structure to a function using call by reference and to create linked lists and other dynamic data structures that rely on dynamic allocation.


struct SP{
	int a,b;
	struct SP *c;
};

void Print(struct SP *Ptr)
{
	printf("%d %d\n",Ptr->a,Ptr->b);
	Ptr->a=30,Ptr->b=40;
	printf("%d %d\n",Ptr->a,Ptr->b);
}

void Swap(struct SP *a, struct SP *b)
{
	struct SP temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	struct SP S;
	S.a=20;
	(&S)->b=10;
	Print(&S);


	struct SP *Ptr=NULL;
	Ptr=&S;
	// Or
	Ptr=(struct SP*)malloc(sizeof(struct SP));
	Ptr->a=10;
	(*Ptr).b=20;
	Print(Ptr);


	FILE* In;
	struct tm *Time;

}