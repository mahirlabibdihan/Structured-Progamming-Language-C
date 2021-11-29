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

int a;


 
int main()
{
	int c[10]={1,2,3,4,5,6,7,8,9,10};
	int e[]={1,2,3,4,5,6,7,8,9,10}; 
	// int e[]={};	// sizeof(e) = 0

	int a[10]={1,2,[5]=3,[9]=4};
	int b[10]={[0 ... 5] = 3 , [7 ... 9] = 4};
	int i;

	printf("%d\n",sizeof(e));
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}


	int V[i];  // Variable length array
	// Variable length arrays can't be initialized 
	// This is valid for block scope or prototype scope , not for file scope
	// Local Variable Length array is valid .Global Variable Length array is not valid .
}