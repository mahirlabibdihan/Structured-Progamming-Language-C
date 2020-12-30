#include<stdio.h> 
#include<stdlib.h>

// return-type function-name (parameter declarations) {
// definitions and statements
// }
// int Function(int a,int b)
// {
		// return a+b;
// }

// int Function(a,b)int a;int b;
// {
		// return a+b;
// }


//Standard Library Function - Built in functions in c programming which are defined in header files. Only the prototypes are there in the header files. Not the source code.

//User-Defined Function - Creater by user


//Function name is a pointer


//Global Variables can be accessed and changed from any function
//Local Variables can be accessed and changed from the same function only.Variable declared within a function can only be used by that function.
//Function Parameters are Local Variable


//main() Function is must for a c program
//main() Function cannot be called from another funtion [Infinity Loop]


//Call by refference - Passing the address of a variable --- [ Array always call by refference ] 
void CallRef(int *b)
{
	//b -> Address of b
	//*b -> Value of b
	*b=5; // a will also be 5
}
void Callr()
{
	int a;
	CallRef(&a);
	int b[5];
	CallRef(b);
}



//Call by value - Passing the value of a variable
void CallVal(int b)
{
	//b is a local variable of function PassVal
	//b -> Value of a
	//&b -> Address of b (not a)
	b=5; // value of a will not change
}
void Callv()
{
	int a;
	CallVal(a);
}




//Function and variable name can be same unless you use both in the same function
void Dihan()
{
	int Dihan;
}//Correct

// void Nahid()
// {
// 	int Dihan;
// 	Dihan();
// }//Incorrect




//Can not return the address of local variable of a function unless it is Static Variable or allocated by malloc.
 // Because the allocated memory is automatically free at the end of function execution. But in malloc the memory needs to be free manually.
int* LocalAddress()
{
	int *a=(int*)malloc(sizeof(int));
	return a;
}//Correct
int* StaticAddress()
{
	static int a;
	return &a;
}//Correct
// int* LocalAddress()
// {
// 	int a;
// 	return &a;
// }//Incorrect


void Print2D(int n,int m,int x[][m])  // Works in C compiler not in C++
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",x[i][j]);
		}
		puts("");
	}
}

void Print2Das1D(int n,int m,int *x)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",x[i*m+j]);
		}
		puts("");
	}
}
//Passing 2D array to  function
void Array2D()
{
	int a[4]={1,2,3,4};
	int x[2][4]={1,2,3,4,5,6,7,8};
	int **y=(int**)x;  // incorrect
	// Because 2D array is also is also a 1D array.
	int *z=(int*)x;  //correct
	int (*w)[4]=x;   //Pointer to First 1D array of 2d array 

	//Access elements
	//2D array - 2nd row 3rd coloumn
	// printf("%d\n",*(x[0]+1*4+2));
	// printf("%d\n",z[1*4+2]);
	//1D array - 3rd coloumn
	// printf("%d\n",a[2]);


	// Print2D(sizeof(x)/sizeof(x[0]),sizeof(x[0])/sizeof(x[0][0]),x);
	// Print2Das1D(sizeof(x)/sizeof(x[0]),sizeof(x[0])/sizeof(x[0][0]),(int*)x);
}


//Function can not return more than one variable
void F1(){}  // No parameter & No return value
void F2(int a){}  // With parameter & No return value
int F3(){} // No parameter & with return value
int F4(int a){} // With parameter & with return value



void Function(int a,int b); //Function prototype or declaration // int a,int b are parameters 

void FunctionPointer(void (*Function)(int,int)) //Function Pointer as Parameter
{
}


//main() can return void/int in c program. But it must return int in c++ program.
int main(int n,char *Argc[]) //Arguments in main function is Command-line argument //We can pass values to main function using command-line
{
	Function(5,4);  
	//Calling Function //5,4 are arguments
	FunctionPointer(Function);  //Function Pointer as Argument
	Array2D();
}

void Function(int a,int b) //Function definition = Function Declaration + Statements
{
	a=a+b;
}