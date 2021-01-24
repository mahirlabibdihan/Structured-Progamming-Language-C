#include <stdio.h>

int Add(int a,int b)
{
	int A=a,B=b,C,S,i;
	
	for(S=0,C=0,i=1;;i*=10)
	{
		S+=i*((A%10)^(B%10)^C);
		C=((A%10)&(B%10))|((A%10)&C)|((B%10)&C);
		A/=10,B/=10;
		if(!A&!B) break;
	}

	return S;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",Add(a,b));
}