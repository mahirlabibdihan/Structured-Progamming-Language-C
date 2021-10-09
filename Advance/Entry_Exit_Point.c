#include<stdio.h>

void __attribute__((constructor)) Dihan();
void __attribute__((destructor)) Nahid();
void Dihan
{
	printf("Hello Dihan");
}

// void Nahid()
// {
// 	printf("Hello Nahid");
// }
int main()
{
	printf("Hello Main");
	return 0;
}