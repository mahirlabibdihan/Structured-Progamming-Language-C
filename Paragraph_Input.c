#include<stdio.h>

int main()
{
	int i,j;
	// // 1D Array
	char Para[1000];

	for(i=0;EOF!=scanf("%c",&Para[i]);i++);
	Para[i]='\0';
	puts(Para);


	// // 2D Array
	char Para2[100][100];
	for(i=0;NULL!=gets(Para2[i]);i++);

	for(j=0;j<i;j++)
		printf("%s\n",Para2[j]);

	// for(i=0;EOF!=scanf("%[^\n]",Para2[i])&&i<10;i++);
    

	// 	 for(j=0;j<i;j++)
	// 	printf("%s\n",Para2[j]);

}