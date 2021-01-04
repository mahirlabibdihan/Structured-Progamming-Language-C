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
#include<errno.h>
//  Many of the functions return the value of the macro EOF to indicate unsuccessful completion of the operation . Since EOF is used to report both end of file and random errors, it’s often better to use the feof function to check explicitly for end of file and ferror to check for errors.


int main()
{
	FILE* Ptr=fopen("Data.txt","w ");
	if(!Ptr)
	{
		perror("Error printed by perror ");
		return 1;
	}
    while (fgetc(Ptr) != EOF);		// Since the file is opened in write , but trying to read it . fgetc() will return EOF .
    if (feof(Ptr)) 		// feof() will return 0 since Ptr doesn't reach end of file
    {
      	puts ("End-of-File reached.");
      	perror("Error printed by perror ");
    }
    else if(ferror(Ptr))	  // feror() will return non-zero value as there's a error
    {
    	puts("Error reading file .");
    	perror("Error printed by perror ");		 
    }
    fclose(Ptr);
}
