#include<stdio.h> 
#include<stdlib.h>

void F1(int m,int (*x)[m]) // Not applicable in C++
{

}
void F2(int** y) // Applicable in C++
{

}

typedef int (*Pointer)[10];
int main()
{
	int a[10];//a==&a[0]
	int* b=(int*)malloc(sizeof(int)*10);//b!=&b[0]

	int a1[10];
	// a1=a;  //Array address can't be changed
	int *b1;
	b1=b;


	// Swap
	// Arrays created by malloc can be swapped easily
	int *B=(int*)malloc(sizeof(int)*5);
	int *temp=b;
	b=B;
	B=temp;



	//2D array

	int c[10][10];//c==c[0]&&c[0]==&c[0][0]
	int (*e)[10]=c;
	Pointer P=c;



	int** d=(int**)malloc(sizeof(int*)*10);
	int i;for(i=0;i<10;i++)*(d+i)=(int*)malloc(sizeof(int)*10);//d!=d[0]&&d[0]!=&d[0][0]
	int** f=d;

	int *M[10];
	for(i=0;i<10;i++) M[i]=(int*)malloc(sizeof(int)*10);

/**********************************************************/
	int (*m)[10]=(int(*)[])malloc(sizeof(int)*10*10);       //More like normal 2d array
	m[0][1]=10;
	// printf("%d %d %d %d\n",&d[0][9],&d[1][0],&m[0][9],&m[1][0]);
/**********************************************************/




	F1(10,c);
	F1(10,m);
	F2(d);





	long long n=10;
	// scanf("%lld",&n);
	int g[n];  // No chance of error handling for negative or large size.

	int *h=(int*)malloc(sizeof(int)*n);
	if(h==NULL) // On failure
	{
		if(n<0) printf("Array size is negative.");
		else printf("Array size is too large.");
		return 0;
	}


}