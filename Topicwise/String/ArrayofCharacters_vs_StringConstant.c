#include<stdio.h> 
char p[6]="Dihan"; // Stores the elements of "Dihan" to p array .
char *q = "Dihan"; // Stores the address of "Dihan" to q pointer .
int main()
{
	char a[6]={'D','i','h','a','n','\0'}; // Extra space is needed to store the null character // a[6] instead of a[5]
	char b[6]="Dihan"; // By default there's a null character at the end of string constant
	puts(a);
	puts(b);


	
	b[0]='N';
	puts(b);
	// "Dihan"[0]='N';  // String Constant is a Read only location . We cannot change its value or assign to it.


	char *c=b;
	char *d="Dihan";
	c[2]='s';
	// d[2]='s'; // Assignment not possible
	puts(c);

	char e[10];
	int n,i;
	scanf("%d\n",&n);  // Needs the size of string to take input
	for(i=0;i<n;i++)   // %c takes the last enter as input
	{
		scanf("%c",&e[i]);
	}
	e[i]='\0';

	puts(e);

	scanf("%d",&n); // %s doesn't need the size of string to take input 
	scanf("%s",e);  // %s doesn't take the last enter as input . gets() does.
	puts(e);
}