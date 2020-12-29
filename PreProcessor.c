#include<stdio.h>
#define X 0.8

#define print_dec(var)  printf(#var"=%d\n",var);



#define abs(x)  ( x>=0 ? x : -x ) 
/******Redefining Macro*******/
#define MAX 1000
#undef MAX
#define MAX 100
/****************************/

int main()
{
	// int counter=5;
	// print_dec(counter);
	
	// printf("%s %s %d %s",__DATE__,__TIME__,__LINE__,__FILE__);



	printf(#var);
}  