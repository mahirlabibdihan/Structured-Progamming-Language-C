// Variable , Function , Structure , etc... can be Declared many times , But defined only once . 
// Memory is allocated during the Definition . Memory can be allocated only once for a specific Variable , etc....

// A variable is declared when the compiler is informed that a variable exists (and this is its type); it does not allocate the storage for the variable at that point.

// A variable is defined when the compiler allocates the storage for the variable.

// In C language definition and declaration for a variable takes place at the same time. 
// int a;


// Declaration :
// extern int a;    // Variable Declaration .
int Func(int,int);    // Function Declaration .
struct S;	 // Structure Declaration .


int a;

// Definition :
// extern int a=10;	// int a;  // Variable Declaration + Definition // Initialization an extern variable means Definition .
int Func(int a,int b)	 // Function Declaration + Definition .
{
	return a+b;
}

struct S	// Structure Declaration + Definition .
{		
	int a,b;
};

main()
{

}