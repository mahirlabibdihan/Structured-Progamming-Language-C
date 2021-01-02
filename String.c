#include<stdio.h>
#define strin(String_Name,Input_Width) scanf("\n%"Input_Width"[^\n]",String_Name),scanf("%*[^\n]"),getchar()
int main()
{
	char Name[10]="Dihan";
	// char *List[]={"Dihan","Ohi"};
	// puts(List);
	strin(Name,"9");
	puts(Name);
}