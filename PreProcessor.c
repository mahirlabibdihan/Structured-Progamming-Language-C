#include<stdio.h>
#define X 0.8

#define swap(Type,a,b) {Type c=a;a=b;b=c;}

#define print_dec(var)  printf(#var"=%d\n",var);

#define SUM(a,...) sum(a,(5, ##__VA_ARGS__) )

int sum (int a,int b)
{
  return a + b;
}


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