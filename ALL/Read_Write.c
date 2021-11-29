// C program to illustrate 
// I/O system Calls 
#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/
#include<fcntl.h> 
  
int main (void) 
{ 
    int fd[2]; 
    char buf1[12] = "hello world"; 
    char buf2[12]; 
  
    int b=10;
    fwrite(&b,4,1,stdout);
    // assume foobar.txt is already created 
    fd[0] = open("data.txt", O_RDWR);         
    fd[1] = open("data.txt", O_RDWR); 
      
    int a='5';
    // write(fd[0], buf1, strlen(buf1));          
    // write(1,&a,4); 


  
    close(fd[0]); 
    close(fd[1]); 
  
    return 0; 
} 