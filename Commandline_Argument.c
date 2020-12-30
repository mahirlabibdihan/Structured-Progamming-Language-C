  #include <stdio.h>
int main(int n,char *arg[])
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("%s\n",arg[i]);
	}
	return 0;
}