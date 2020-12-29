
void Recursion(int n)
{
	if(n==0) return;

	printf("%d\n",n);

	// Recursion(n--); // This will lead to infinity loop .
	Recursion(n-1);  
}

int main()
{
	Recursion(10);
}