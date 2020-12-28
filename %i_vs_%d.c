#include<stdio.h>
int main()
{
	int a;
	scanf("%i",&a);// 010 will treat as a octal number .Decimal Value = 8
	printf("%d",a);
	scanf("%d",&a);// 010 will treat as a decimal number .Decimal Value = 10
	printf("%d",a);
}