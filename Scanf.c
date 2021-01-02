#include<stdio.h>
#include<stdlib.h>


void Stdin_Buffer()			// Prints the characters left in current buffer
{
		printf("Characters left in stdin : |");
		char STDIN[10];
		int Length=0;
		while(1)
		{
			char f=getc(stdin);
			if(f=='\n') 
			{
				printf("\\n|%c",f);
				STDIN[Length++]=f;
				break;
			}
			printf("%c",f);
			STDIN[Length++]=f;
		}

		int i;
		for(i=Length-1;i>-1;i--)
			ungetc(STDIN[i],stdin);
}


//  One white-space character in format-string matches any combination of white-space characters in the input.
int main()
{
	// f the function successfully reads the data, the number of items read is returned
	int c=5,a=10;
	char b='a',e[10];
	printf("Values before scanf : a=%d b='%c' c=%d\n",a,b,c);
	int d=scanf("%d%c%d",&a,&b,&c); // Input - 12 x 13 --> a=12 b=' ' c= Unchanged
	// 12 will be stored in a . As we have entered a space after first integer , the space will be stored in b . Then scanf will look for a integer . But it will find 'x' . 'x' will confilct with %d . So scanf() will end . 'x 13' is not read . So it is left in stdin .

	printf("Values after scanf : a=%d b='%c' c=%d\n",a,b,c);

	printf("Numbers of items read = %d\n",d);
	// To see whats left in stdin
	Stdin_Buffer();
	// gets(e);		// flushes the '\n' entered after the string  // Can't limit the input size
	// scanf("%[^\n]",e);   // '\n' remains in the stdin
 
 	// scanf("\n%[^\n]",e);	// ignores '\n' at the start of input buffer
 	// getchar();	  // flushes the '\n' entered after the string

	// To take a whole line as input . 
 	// scanf("\n%9[^\n]",e),scanf("%*[^\n]"),getchar();
 	// Can limit input string size .
 	// ignores '\n' at the start of input buffer
 	// flushes everything left in the stdin after taking limited input .


	// scanf("%[^' ']",e);
	// Takes input until whitespace

	// scanf("%[^' ','\n']",e); 
	// Takes input until whitespace , new line 
	// Doesn't ignore '\n' at the start of input buffer


	// scanf("\n%[^' ','\n']",e); 
	// Same as %s

	// scanf("%s",e);	
	// takes input until whitespace , new line,EOF
	// ignores '\n' at the start of input buffer


	int i;
	for(i=0;i<strlen(e);i++)
	{
		printf("->%c<-\n",e[i]);
	}
	
	
	Stdin_Buffer();

}


// If a character in stdin conflicts with format-string, scanf() ends. The conflicting character is left in stdin as if it had not been read.


