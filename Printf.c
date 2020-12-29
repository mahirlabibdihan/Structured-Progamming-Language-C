#include<stdio.h>
void print()
{
  int a=155;
  float b=5.1234567;
    
  printf("\nFor decimal\n");
  printf(" %d\n",a);
  printf(" %10d\n",a);
  printf(" %010d\n",a);
  printf(" %-10d\n",a);

  printf("\nFor floating point\n");
  printf(" %f\n",b);
  printf(" %.5f\n",b);
  printf(" %.10f\n",b);
  printf(" %10f\n",b);
  printf(" %10.5f\n",b);
  printf(" %10.5f\n",1111111.2);
  printf(" %010.5f\n",b);
  printf(" %-10.5f\n",b);

  printf("\nFor octal\n");
  printf(" %o\n",a);
  printf(" %#o\n",a);  //#=base//base of octal is 0
  printf(" %10o\n",a);
  printf(" %010o\n",a);
  printf(" %-10o\n",a);

  printf("\nFor hexadecimal\n");
  printf(" %x\n",a);
  printf(" %#x\n",a);  //base of hexaadecimal is 0x
  printf(" %X\n",a);
  printf(" %10x\n",a);
  printf(" %010x\n",a);
  printf(" %-10x\n",a);

  printf("\nFor exponential\n");
  printf(" %e\n",b);
  printf(" %E\n",b);
  printf(" %.5e\n",b); 
  printf(" %.10e\n",b);
  printf(" %20.5e\n",b);
  printf(" %020.5e\n",b);
  printf(" %-20.5e\n",b);



  int i=10;
  printf("%d %d\n",i,i++);
  printf("%d\n",(5,i));

  // printf("%Takla");

  printf("%-s","Dihan");
}
int main(){print();}
