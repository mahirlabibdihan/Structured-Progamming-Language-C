#include<stdio.h> 

typedef struct 
{
	int Date: 5;
	int Month: 4;
	int Year: 23;
} Birthday;

int main()
{
	Birthday Dihan={19,8,2020};
	printf("%d\n",sizeof(Dihan));
}