int* Realloc(int *a,int Size)
{
	int *b=(int*)malloc(Size);
	if(b==NULL) return a;
	int i;
	for(i=0;i<(Size/sizeof(*a));i++)
	{
		b[i]=a[i];
	}
	free(a);
	return b;
}

int main()
{
	int *a;
	a=(int*)malloc(sizeof(int)*5);
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	a=Realloc(a,sizeof(int)*10);
	a[5]=10;
	a[6]=11;
	a[7]=12;
	a[8]=13;
	a[9]=14;
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);

}