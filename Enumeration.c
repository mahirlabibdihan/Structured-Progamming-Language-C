#include<stdio.h>

// Enumeration is a user defined datatype in C language. It is used to assign names to the integral constants .

// Constant names of two different enums can.t be the same
enum week{Sat=1,Sun,Mon,Tue,Wed,Thur,Fri};  // These are integer constants // only integer numbers can be assigned
enum week day = Sat;


enum Name{Dihan,Ohi,Amrin,Subha} Me=Dihan; // Can be declare this way

typedef enum
{
	false,true
}bool;

int main()
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