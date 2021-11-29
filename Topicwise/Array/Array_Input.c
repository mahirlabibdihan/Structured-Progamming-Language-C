#include<stdio.h>
struct{
	int a:2;
	int b:2;
	int c:2;
	int d:2;
	char e;
}Dihan;
int main()
{
	Dihan.a=0;
	Dihan.b=1;
	Dihan.c=2;
	Dihan.d=3;
	Dihan.e='4';

	FILE* S=fopen("Data.txt","wb");

	int a=50;
	fwrite(&Dihan,sizeof(Dihan),4,S);

	fclose(S);

	printf("%x",1905072);
}