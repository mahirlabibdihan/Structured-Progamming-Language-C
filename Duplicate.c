int main()
{
	int a[10]={1,2,3,0,4,5,6,7,8,9};

	int i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				puts("YES");
				return 0;
			}
		}
	}

	puts("NO");
}