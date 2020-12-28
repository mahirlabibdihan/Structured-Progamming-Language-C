void swap1(int *a,int *b)
{
	int c=*a; 
	*a=*b; 
	*b=c;
}
void swap2(int *a,int *b)
{
	// *a=*a^*b;
	// *b=*a^*b;
	// *a=*a^*b;

	// *a^=*b;
	// *b^=*a;
	// *a^=*b;
	*a^=*b^=*a^=*b;
}
void swap3(int *a,int *b)
{
	// *a=*a+*b;
	// *b=*a-*b;
	// *a=*a-*b;

	// *a+=*b;
	// *b=*a-*b;
	// *a-=*b;

	*a=*a+*b-(*b=*a);//*a+=*b-(*b=*a);//Correct
}

void swap4(int *a,int *b)
{

	// *a=*a*(*b);
	// *b=*a/(*b);
	// *a=*a/(*b);

	// *a*=*b;
	// *b=*a/(*b);
	// *a/=*b;

	*a=*a*(*b)/(*b=*a); //*a*=(*b)/(*b=*a);//Incorrect
}
void swap5(char x[],char y[])
{
	char z[101];
	strcpy(z,x); 
	strcpy(x,y); 
	strcpy(y,z);
}

int main()
{
	int a=5,b=4;
	swap1(&a,&b);
	printf("%d %d\n",a,b);
}