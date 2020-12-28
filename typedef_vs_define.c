#include<stdio.h>
/*---------Type definitions vs Macro definitions----------*/
// Syntax:
// typedef original alias;
// #define alias original
// typedef -> Follow scope rules.
// #define -> Doesn't follow scope rules.Works globally.
void f(int a, int b)
{
	// typedef long long ll;
	// #define ll long long 
}


// typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.As a result #define errors doesn't give compile errors unless we use them.typedef error always does.

#define ll long lon
// typedef long lon ll;


typedef char* ptr;
#define PTR char*



int main()
{
 	// scanf("%*c");
	ptr a,b,c;  //char *a,*b,*c;
	PTR A,B,C;  //char *A,B,C;
	// printf("%d %d %d \n",sizeof a,sizeof b,sizeof c);
	// printf("%d %d %d \n",sizeof A,sizeof B,sizeof C);
	


	// MYINT I;


}