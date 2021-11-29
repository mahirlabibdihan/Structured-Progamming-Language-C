typedef int myint;
typedef int *myptr;
typedef void (*Ptr_Func)(int,int); 
typedef int (*Ptr_2D)[10];


void f(int a,int b)
{
	a=a+b;
}
int main()
{
	myint a;
	myptr b; // int *
	myptr c,d;  //int *c,*d; 

	int Array2D[10][10];

	Ptr_2D P=Array2D;  	//(*)[10]  //pointer to a 1D array of 10 elements
	Ptr_Func  F=f;	//(*)(int,int)   //pointer to function

}