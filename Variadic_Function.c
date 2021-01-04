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
#include<stdarg.h>


// Macros:
// va_start , va_arg , va_copy , va_end
void print(double n, ... )
{



  // va_list is a type
   va_list ap;     // typedef __builtin_va_list va_list; / typedef char*va_list;
   //ap is a pointer . //Most probably char*




  // va_start is a macro . // #define va_start(ap,n)  ((ap) = ((va_list) __builtin_next_arg(n)))  
   // It takes two arguments . 
   // First argument should be a va_list object .
   // Second argument should be the last named argument in variadic function prototype .
   va_start(ap,n); 
   // Now ap will point to the argument after n . Means the first argument of ...  




    //va_arg is a macro . // #define va_arg(ap, t)   (((ap) = (ap) + __va_argsiz(t)),   *((t*) (void*) ((ap) - __va_argsiz(t))))
    // It takes two argument .
    // First argument should be a va_list object .
    // Second argument should be the type of data which the va_list object is currently pointing to .
    // data type can't be short , unsigned short , char , float .
    // char , short , unsigned short  is promoted to int .
    // float is promoted to double .

    int i;
    for(i=0;i<n;i++)
    {
      printf("%d \n",va_arg(ap,int));
    }   	
    // Firstly, va_arg fetch the data which 'ap' is currently pointing to .
    // Then, va_arg increments 'ap' based on the sizeof the 2nd argument of va_arg and as a result 'ap' points to the next argument .




   va_end(ap);
}


int main() 
{ 
    print(2,1,4);  
    return 0; 
} 


