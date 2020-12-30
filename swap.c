#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Swap(Type,a,b) {Type c=a;a=b;b=c;}
void swap (void *a, void *b, int sz) {
    char buf[512];
    void *p = buf;
    if (sz > sizeof(buf)) p = malloc(sz);
    memcpy(p, a, sz);
    memcpy(a, b, sz);
    memcpy(b, p, sz);
    if (p != buf) free(p);
}

void swap1(int *a,int *b)    // Applicable for swaping pointers 
{
	int c=*a; 
	*a=*b; 
	*b=c;
}
void swap2(int *a,int *b)
{
	// *a=*a^*b;
	// *b=*a^*b;
	// *a=*a^*b;

	// *a^=*b;
	// *b^=*a;
	// *a^=*b;
	*a^=*b^=*a^=*b;
}
void swap3(int *a,int *b)
{
	// *a=*a+*b;
	// *b=*a-*b;
	// *a=*a-*b;

	// *a+=*b;
	// *b=*a-*b;
	// *a-=*b;

	*a=*a+*b-(*b=*a);//*a+=*b-(*b=*a);//Correct
}

void swap4(int *a,int *b)
{

	// *a=*a*(*b);
	// *b=*a/(*b);
	// *a=*a/(*b);

	// *a*=*b;
	// *b=*a/(*b);
	// *a/=*b;

	*a=*a*(*b)/(*b=*a); //*a*=(*b)/(*b=*a);//Incorrect
}

void swap5(char *x,char *y)
{
	// char z[101];
	char *z=(char*)malloc(sizeof(char)*(strlen(x)+1));
	strcpy(z,x); 
	strcpy(x,y); 
	strcpy(y,z);
}

void swap6(char **x,char **y)
{
	char *temp=*x;
	*x=*y;
	*x=temp;
}
int main()
{
	int a=5,b=4;
	swap1(&a,&b);
	char *p="Dihan",*q="Ohi",r[10]="Subha",s[10]="Amrin";

	swap6(&p,&q);
	swap6((char**)&r,(char**)&s);
	printf("%d %d\n",a,b);
}