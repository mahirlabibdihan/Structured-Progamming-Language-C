#include<stdio.h>

int main()
{
	// Use of negative array index

	// Array size can't be negative
	int a[10]={1,2,3,4,5,6,7,8,9,10};

	// Accessing
	// a[5] or 5[a]
	// *(a+5) or *(5+a)

	int *p=a+4;

	printf("%d",p[-3]);		// Negative array index is valid , if it is accesing a valid address .
}