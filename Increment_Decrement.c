#include <stdio.h>
// Postfix : a=b++;
// Postfix operator will change the value if it is used again
// a= b++;   // a=b , b+=1 ;
// a = b+++b ;   // a=b+b+1   // As b is used again in the same expression  
// a = b+ ++b ;   // a = b+b+2   // As precedence of ++ is greater than +

// Prefix : a=++b;
// Prefix operator will change the value immediately

int main()
{
	int a=5,b=10;

	printf("%d %d %d\n",a---b,a,b);  //a-- - b
	printf("%d %d %d\n",a+++b,a,b);   //a++ + b

	printf("%d %d %d\n",--a-b--,a,b);   //--a - b--
	printf("%d %d %d\n",++a+b++,a,b);   //++a + b++
	printf("%d %d %d\n",-a---b--,a,b);   //- a-- - b--
	printf("%d %d %d\n",a++-b--,a,b);	//a 
	printf("%d %d %d\n",a++-b++,a,b);
	printf("%d %d %d\n",a+++b++,a,b);
	printf("%d %d %d\n",+a+++b++,a,b);

	printf("%d %d %d\n",a-- - --b,a,b);
	printf("%d %d %d\n",a++ + ++b,a,b);
	printf("%d %d %d\n",--a- --b,a,b);
	printf("%d %d %d\n",++a+ ++b,a,b);

	printf("%d %d %d\n",a-+-+-+-b,a,b);





}