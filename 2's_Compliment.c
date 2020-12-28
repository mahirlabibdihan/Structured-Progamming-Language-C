#include<stdio.h>

//Prints the bitpattern of char,int,long,long long ,unsigned
#define BitPattern(n) {\
	unsigned long long mask=1LL<<(sizeof((n))*8-1),i;\
	for(i=0;i<sizeof((n))*8;i++,mask>>=1) printf("%d",(n)&mask?1:0); puts("");\
}

int main()
{
	int a=-1;
	int b=1<<31;
	BitPattern(b>>1);
	printf("%u",b);

}