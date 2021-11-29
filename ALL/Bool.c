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
#include<stdbool.h>
// #define bool        _Bool
// #define true        1
// #define false        0

void BOOL();
int main()
{
	bool a;
	a=true;
	a=false;
	printf("%d %d %d\n",sizeof(a),true,false);
	BOOL();
}

/******** Implement **********/
// #define true        1
// #define false        0
// #define bool char


//Or

// typedef enum
// {
// 	false,true
// }bool;


void BOOL()
{
	bool a;
	a=true;
	if(a)
	{
		puts("True");
	}

}

/*****************************/