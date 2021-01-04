#include<stdio.h>

int main()
{
	// There are two ways to take a whole line as a input .
	char String[10];

	int n;
	printf("Enter the size of string : ");
	scanf("%d",&n);
	/*********** gets(); *********/
	gets(String);
	printf("->%s<-\n",String);
	// Problem 1:
	// Input : 5
	// 		   Dihan
	// -> n=5;   String = <empty>;	// Nothing stored in String . // String remains unchanged
	// Output : -><-

	// Input : 5 Dihan
	// -> n=5;   String = " Dihan";  // Extra space in the beginning
	// Output : -> Dihan<-

	/*Everything entered after 5 and before '\n' will be stored into string .*/






	// Problem 2:
	// Can't limit the input . Can take input of unlimited size , i.e. Input string size can be greater than the size of the declared string .

	gets(String);
	// Input : "I am Mahir Labib Dihan"     // Size of input is 22 . But size of declared string is 10 (char String[10];) 
	puts(String);
	// Output : "I am Mahir Labib Dihan" 	// It means the whole input will store into the string ,  no matter what the size is .

	// We can outcome this by using fgets(String,10,stdin);  // But it leaves the '\n' in stdin.
	/************************/




	/******** scanf("%[^\n]",Name); **********/
	// Problem 1:
	// Same as first problem of gets().


	// Problem 2:
	// Doesn't flushes the '\n' (Enter after the line input) .'\n' remains in the stdin , Which causes the first problem for the next line inputs .

	   char Line1[20],Line2[20];
	   scanf("%[^\n]",Line1);
	   printf("->%s<-\n",Line1);
	   scanf("%[^\n]",Line2);
	   printf("->%s<-\n",Line2);

	// Input : Dihan
	// Output : ->Dihan<-
	//  		-><-
	   scanf("%[^\n]",Line1);
	   printf("->%s<-\n",Line1);
	   scanf("%[^\n]",Line1);
	   printf("->%s<-\n",Line1);
	// Input : Dihan
	// Output : ->Dihan<-
	//  		->Dihan<-


	// Problem 3:
	// If we set the input width and the input line is greater than the width , the remaining input will left in the stdin , which will cause problem letter .
	   scanf("%10[^\n]",Line1);
	   printf("->%s<-\n",Line1);
	   scanf("%[^\n]",Line2);
	   printf("->%s<-\n",Line2);

	// Input : I am Mahir Labib Dihan
	// Output : ->I am Mahir<-
	//  		-> Labib Dihan<-



	// So what's the proper way to take a line as Input????
	// Solution :
	  scanf("\n%10[^\n]",Line1);      // Ignores newline and whitespaces at the beginning.
	  scanf("%*[^\n]");		// Clears the stdin .( '\n' is still left in stdin .)
	  getchar();	// Clears '\n' from stdin .

	// Take a whole line as input : 

	/******* scanf("\n%10[^\n]",Line1),scanf("%*[^\n]"),getchar(); *******/

	// scanf("\n%10[^\n]",Line1);while((getchar()) != '\n');

	// You can use this as a macro -
	#define strin(String_Name,Input_Width) scanf("\n%"Input_Width"[^\n]",String_Name),scanf("%*[^\n]"),getchar()
	// String_Name(A pointer) is the address of the string used for taking input .
	// Input_Width(Character Array) is the width of the expected input . To set 10 as width we should pass "10" . 



	  puts(Line1);

	
}