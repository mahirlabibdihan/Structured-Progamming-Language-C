#include<stdio.h>
int main()
{

	int a=5,b=10,*c=NULL,*d=NULL;
	float A=5.5,B=10.7,*C=NULL,*D=NULL;

	/********************* '-' : Substraction or Unary minus **********************/
		// It can be both Binary and Unary operator.
		// Unary minus :
		// Takes only one operand in the right . The operand can't be a pointer.
		-b;
		// -d; // Invalid

		/***** Shortcut *****/
		// - Type2
		/*********************/



		// Substraction Operator :
		// Takes two operands . Two operands can be ,
		// --> Two variables/constants of any type
		a - b;
		A - b;
		A - B;
		// --> Two pointers of same type 
		c - d;
		C - D;
		// c - C;  // Invalid
		// --> One pointer as Left operand and one variable/constant as Right operand
		c - a;
		D - 1;
		// a - c;
		// 1 - D;  // Invalid

		/***** Shortcut *****/
		// Type1 - Type2
		// Type* - Type*
		// Type* - Type
		/*********************/
	/******************************************************************************/



	/******************** '+' : Addition or Unary plus ****************************/
		// It can be both Binary and Unary operator.
		// Unary plus :
		// Takes only one operand in the right . The operand can't be a pointer.
		+b;
		// +d; // Invalid

		/***** Shortcut *****/
		// + Type2
		/*********************/



		// Addition Operator :
		// Takes two operands . Two operands can be ,
		// --> Two variables/constants of any type
		a + b;
		A + b;
		A + B;
		// --> Can't take Two pointers
		// c + d;
		// C + D;
		// c + C;  // Invalid
		// --> One pointer and one variable/constant
		c + a;
		D + 1;
		a + c;
		1 + D;

		/***** Shortcut *****/
		// Type1 + Type2
		// Type + Type*
		// Type* + Type
		/*********************/
	/******************************************************************************/



	/*********************** '*' : Multiplication Operator ************************/
		// It is Binary operator.
		// Takes two operands . Two operands can be ,
		// --> Two variables/constants of any type
		a * b;
		A * b;
		A * B;
		// --> Can't take Two pointers
		// c * d;
		// C * D;
		// c * C;  // Invalid
		// --> Can't take One pointer and one variable/constant
		// c * a;
		// D * 1;
		// a * c;
		// 1 * D;  // Invalid

		/***** Shortcut *****/
		// Type1 * Type2
		/*********************/
	/******************************************************************************/




	/************************** '/' : Division Operator ***************************/
		// It is Binary operator.
		// Takes two operands . Two operands can be ,
		// --> Two variables/constants of any type
		a / b;
		A / b;
		A / B;
		// --> Can't take Two pointers
		// c / d;
		// C / D;
		// c / C;  // Invalid
		// --> Can't take One pointer and one variable/constant
		// c / a;
		// D / 1;
		// a / c;
		// 1 / D;  // Invalid

		/***** Shortcut *****/
		// Type1 / Type2
		/*********************/
	/******************************************************************************/	




	/******************************************************************************/	
		/************************ '%' : Modulus Operator **************************/
		// It is Binary operator.
		// Takes two operands . Two operands can be ,
		// --> Two variables/constants of Integer type
		a % b;
		// A % b;
		// A % B;  // Invalid
		// --> Can't take Two pointers
		// c % d;
		// C % D;
		// c % C;  // Invalid
		// --> Can't take One pointer and one variable/constant
		// c % a;
		// D % 1;
		// a % c;
		// 1 % D;  // Invalid

		/***** Shortcut *****/
		// Integer % Integer
		/*********************/
	/******************************************************************************/	


		return 0;
}
