// This address is the entry point of the function and it is the address used when the function is called.

int Function(int,int);
int main()
{
	int (*Func)(int,int)=Function;
}