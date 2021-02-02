#include<stdio.h>
int main()
{
	/// Logical And - &&
	// Bitwise And - &
	// & has higher precedence than && .

	// Logical And -> && -> Its a binary operator .
	// The left and right operands are boolean expressions . Boolean can store true or false. Every non-zero value corresponds to true while 0 corresponds to false.
	// && returns true or false . It returns true if left and right opperands both are true or non-zero , otherwise it returns false .
	// sizeof the return is always 4 .

	// Bitwise And -> & -> Its a binary operator . 
	// The left and right operands are integral types (char and short promotes to int). It does And operation between left and right operands and returns the result . Return type is also integral .
	// sizeof the return is same as sizeof the largest between the left and right operand . If it is smaller than integer , then the size will be size of integer(4) .   


	// & and && work as same in case of both the right and left operands are boolean expressions.
	// But not always same when the right and left operands are integers. --> (3&&2) is equal to (3&2) , but (1&2) is not equal to (1&&2) .
	// & can't have float/double operands . && can .

	if(1&&2)		
	{
		puts("True");      
	}
	else
	{
		puts("False");
	}

	if(1&&2.5) 		// float variable are allowed
	{
		puts("True");     
	}
	else
	{
		puts("False");
	}

	if(1<2&&2>1)       // Boolean expression 
	{
		puts("True");
	}
	else
	{
		puts("False");
	}

	if(1&2)      // Integral elements
	{
		puts("True");
	}
	else
	{
		puts("False");
	}

	if(1<2&2>1)      //  If left or right operands are boolean expression , & will perform operation between the boolean values of them .
	{
		puts("True");
	}
	else
	{
		puts("False");
	}



	// if(1&2.5)      // Invalid // float variables are not allowed
	// {
	// 	puts("True");
	// }
	// else
	// {
	// 	puts("False");
	// }




	if(1&&2&1)      // Proof of higher precedence
	{
		puts("True");
	}
	else
	{
		puts("False");
	}


	//Size
	long long a,b;
	int c,d;
	char e,f;
	printf("%d %d %d\n",sizeof(a&&b),sizeof(c&&d),sizeof(e&&f));
	
	printf("%d %d %d\n",sizeof(a&b),sizeof(c&d),sizeof(e&f));  // char  e and  f is promoted to int .

}

// Boolean Expression : A boolean expression is an expression that has relational and/or logical operators operating on boolean variables. A boolean expression evaluates to either true or false.
// Boolean Data type : A boolean is a data type in the C Standard Library which can store true or false. Every non-zero value corresponds to true while 0 corresponds to false.