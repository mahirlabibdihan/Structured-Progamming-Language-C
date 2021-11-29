#define BitPattern(n) {\
    unsigned long long mask=1LL<<(sizeof((n))*8-1),i;\
    for(i=0;i<sizeof((n))*8;i++,mask>>=1) printf("%d",(n)&mask?1:0); puts("");\
}
int main()
{
	float f=5.4;
	// BitPattern(f); //Error
	int* a=(int*)&f;
	BitPattern(*a);
}
