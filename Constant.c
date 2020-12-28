#include<stdio.h>
#define Max 1<<31 // Defined Constant


/*****Changing Value of Defined Constant*****/
#undef Max
#define Max 100
/********************************************/

int main()
{
	// Using const declares a constant
	// A constant's value can be initialized . But it can't be changed further . It will remain the same throughout the program .
	// Declaration :
	// const Data_Type Name_of_Constant = Initial_Value
	// Data_Type const Name_of_Constant = Initial_Value

	const int a;  // Garbage Value // or int const a;
	static const int b;   // Value = 0
	const int c = 10;   //Value = 10
	printf("%d %d %d\n",a,b,c);

	// Constant should be initialized because its value can't be changed further .




	/************Const and Pointer*************/
	int var;
	const int *p1;  // Pointer to an integer constant // Can assign to p1 . But can't assign to *p1 . 
	//or int const *p1;
	p1 = &var; // Valid
	// *p1=var; // Invalid


	int *const p2;  // Constant pointer to an integer // Can assign to *p1 . But can't assign to p1 .
	// p2 = &var; // Invalid
	*p2 = var; //Valid


	const int *const p3;  // Constant pointer to an integer constant Can assign to *p3 . But can't assign to p3 .
	//or int const *const p3; // 
	// p3 = &var ; // Invalid
	// *p3 = var ; // Invalid
	/******************************************/






    /************** Changing the value of constant *************/
    int *Ptr=(int*)&c;
    *Ptr=8;
    printf("%d\n",c); 
    /******************************************************************/
}