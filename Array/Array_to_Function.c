/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

void Print(int a[],int n)
{
	printf("%d\n",sizeof(a));
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	puts("");
}

int main()
{
	Print((int[]){1,2,3},sizeof((int[]){1,2,3})/sizeof(int));
	int *p=(int[]){1,2,3};
}

