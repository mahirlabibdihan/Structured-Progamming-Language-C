main()
{
	int c[10]={1,2,3,4,5,6,7,8,9,10};//int c[]={1,2,3,4,5,6,7,8,9,10}; // without initialization  int c[] assumed to ham=ve one element;

	int a[10]={1,2,[5]=3,[9]=4};
	int b[10]={[0 ... 5] = 3 , [7 ... 9] = 4};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
}