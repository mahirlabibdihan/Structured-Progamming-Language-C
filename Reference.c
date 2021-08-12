#include<stdio.h>

void swap(int& a,int& b)  // New copy of variables is not created in function parameter .
{
	a^=b^=a^=b;
}
int main()
{
	// When a variable is declared as a reference, it becomes an alternative name for an existing variable.
	int x=10;
	int& ref=x;    // Reference must be initialized // Not applicable for class member
			       // Non new memory is allocated for reference

	ref=20;
	printf("%d %d\n",x,ref);
	printf("%p %p\n",&x,&ref);

	int a=10,b=20;
	swap(a,b);
	printf("a:%d  b:%d\n",a,b);


	// 

}