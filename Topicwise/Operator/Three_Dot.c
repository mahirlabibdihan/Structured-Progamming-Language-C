// The three dots '...' are called an ellipsis

// Variadic function parameter
// By using this a function can take variable number of parameters
int printf(const char* format, ... )
{

}


int main()
{
	// Array Initialization
	int x[10]={[0 ... 9]=-1};
	int y[10]={[0 ... 5]=-1,[5 ... 9]=1};
}