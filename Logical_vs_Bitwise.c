#include <stdio.h>
// 		  			  Logical Operator		   			 Bitwise Operator
// 		  			  ----------------		   			 ----------------
// And  -        		   A&&B	                      		   A&B
// Or   -        		   A||B                       		   A|B
// Not  -         			!A                        		   ~A
// Nand -                !(A&&B)
// Nor  -                !(A||B)  
// Xor  -     								        		   A^B
// XNor  -

#define max(a,b) (a>b?a:b)
int Logical_Xor(int A,int B)
{
	return  ((A) && (!B)) || ((!A) && (B));
}

int Logical_XNor(int A,int B)
{
	return  !((A) && (!B)) || ((!A) && (B));
}

int Bitwise_Nand(int A,int B)
{
	int i,j,k,C=A&B;
	for(j=0;max(A,B)>>j;j++);
	for(i=0;i<j;i++)
	{
		C=C^(1<<i);
	}
	return C;
}

int Bitwise_Nor(int A,int B)
{
	int i,j,k,C=A|B;
	for(j=0;max(A,B)>>j;j++);
	for(i=0;i<j;i++)
	{
		C=C^(1<<i);
	}
	return C;
}

int Bitwise_XNor(int A,int B)
{
	int i,j,k,C=A^B;
	for(j=0;max(A,B)>>j;j++);
	for(i=0;i<j;i++)
	{
		C=C^(1<<i);
	}
	return C;
}

int main()
{
	printf("%d\n",Bitwise_Nand(15,8));
}