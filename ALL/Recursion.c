
void Recursion(int n)
{
	if(n==0) return;

	printf("%d\n",n);

	// Recursion(n--); // This will lead to infinity loop .
	Recursion(n-1);  
}

void Iteration()
{
	iny i,j,k,l;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			
		}
	}
}
int main()
{
	Recursion(10);


}