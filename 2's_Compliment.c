#include<stdio.h>

//Prints the bitpattern of char,int,long,long long ,unsigned
#define BitPattern(n) {\
	unsigned long long mask=1LL<<(sizeof((n))*8-1),i;\
	for(i=0;i<sizeof((n))*8;i++,mask>>=1) printf("%d",(n)&mask?1:0); puts("");\
}

int TwoS(int a)
{
	int A=a,B=1,C,S,i;

	for(S=0,C=0,i=1;;i*=10)
	{
		S+=i*(!(A%10)^(B%10)^C);
		C=(!(A%10)&(B%10))|(!(A%10)&C)|((B%10)&C);
		A/=10;
		B/=10; 
		if(!A&!B) break;
	}
	return S;
}
int main()
{
	int a=-1;
	int b=1<<31;
	printf("%u\n",TwoS(1010));
	BitPattern(b>>1);
	printf("%u",b);

	printf("%d\n",(~1));

}