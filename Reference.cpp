#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
// More memory efficient than pointers
void swap(int& a,int& b)  // New copy of variables is not created in function parameter .
{
	a^=b^=a^=b;
}

int R;

int& Reference()
{
	return R;
}
int main()
{
	// When a variable is declared as a reference, it becomes an alternative name for an existing variable.
	int x=10;
	int& ref=x;    // Reference must be initialized when declared .// Not applicable for class member
			       // Non new memory is allocated for reference

	// void& ref=x;	// Can't be declared as void

	int y;
	// &ref=y;   // Once a reference is created, it cannot be later made to reference another object;
	ref=20;
	printf("%d %d\n",x,ref);
	printf("%p %p\n",&x,&ref);

	int a=10,b=20;
	swap(a,b);
	printf("a:%d  b:%d\n",a,b);


	// Range based for loop
	vector<int> v{1,2,3,4,5};
	for(int& i:v)	// Avoid copy of vector elements
	{
		i=i+1;
	}
	for(int i:v)	// Creates copy of vector elements
	{
		cout<<i<<" ";
	}

	//rvalue reference
	int&& rref=10;
	//lvalue reference
	int& lref=a;
	int& Lref=rref;


	Reference()=a;
	


}