#include<stdio.h> 
#include<time.h>
int main()
{
	clock_t start,end;

	puts("Press enter to start counting...");
	getchar();
	start=clock();
	
	unsigned i=4294967295;
	while(i--);

	puts("\nPress enter to see time...");
	getchar();
	end=clock();
	printf("%lf seconds\n",(double)(end-start)/CLOCKS_PER_SEC);

	puts("\nPress enter to exit...");
	getchar();
}