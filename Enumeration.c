#include<stdio.h>

// enum enum_name { constants , ... , .. }[one or more variables ];

// Enumeration is a user defined datatype in C language. It is used to assign names to the integeral constants , which makes the code more readable . 
// The value assigned to names in range from minimum possible integer value to maximum possible integer value.

//sizeof enum variable is the size of the largest integer constant
// Names of two different enums in the same scope can't be the same .
enum week{Sat=1,Sun=5,Mon=4,Tue=2,Wed=8,Thur=9,Fri=10};  // These are integer constants // only integer numbers can be assigned
enum week day = Sat;

// If we don't assign any values to the enum names , by default the values are assigned starting from 0. We can assign values to some name in any order. All unassigned names get value as value of previous name plus one.
enum Name{Dihan,Ohi=4,Amrin,Subha} Me=Dihan; // Can be declare this way
// Dihan = 0 , Ohi=4 , Amrin =5 , Subha=6


// Two constants can have same value .
enum Double{ Welcome = 0 , to = 1 , Cprogram = 0 };


// The key point to understand about an enumeration is that each of the symbols stands for an integer value. As such, they can be used anywhere that an integer can be used.
/******* Implementing Boolean data tyoe ********/
	typedef enum
	{
		false,true
	}bool;

	void Bool()
	{
		bool a=1;
		if(a==true)
		{
			puts("True");
		}
		else
		{
			puts("False");
		}

		printf("%d\n",sizeof(a));
	}
/***********************************************/
int main()
{
	int a= Welcome;    // Enum constants can be assigned to other data types .
	Bool();
}