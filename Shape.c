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
#include<windows.h>

int main()
{
	FILE *S=fopen("Shape.txt","r");
	int x[20][20];
	int i,j;
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			fscanf(S,"%d",&x[i][j]);
		}
	}
	fclose(S);

	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			if(x[i][j]) printf(".");
			else printf(" ");
		}
		puts("");
	}
}