/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/
#include<stdio.h>
// int printf(const char* format,...);

// %[flags][width][.precision][length]specifier, 

// On success, the total number of characters written is returned.

// If a writing error occurs, the error indicator (ferror) is set and a negative number is returned.

// If a multibyte character encoding error occurs while writing wide characters, errno is set to EILSEQ and a negative number is returned.
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

  char Name[10];
  sprintf(Name,"%d",10);
  puts(Name);


  printf("%d\n",5.5);
  printf("%d\n",(int)5.5);


  printf("%05d\n",-5);
  printf("%5d\n",-5);
}
int main(){print();}
