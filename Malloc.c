// Malloc returns a void* pointer to a block of memory stored in heap .

int main()
{
	int *a=(int*)malloc(sizeof(int)*10);

	// To store writable string 
	// int *Name = "Dihan" ; // Incorrect  // Read only . 
	int *Name=(char*)malloc(sizeof(char)*(strlen("Dihan")+1));
	strcpy(Name,"Dihan");
	free(a);
}