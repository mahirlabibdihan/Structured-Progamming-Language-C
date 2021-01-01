#include<stdio.h>
#include<string.h>
/*
	  		0X0A(10) -> Line Feed / New Line
	'\n' ->
			0X0D(13) -> Carriage Return
*/
/*


	FILE is a structure.
 


	FILE* fopen(char* File_Path,char* Mode);
	->Returns NULL on failure.


	Mode:
	"r"	-> Open a existing text file for read.
	"r+" -> Open a existing text file for read / write.
			(Doesn't erase the whole file. Overlaps.)
	"w"	-> Create a new text file for write.
			(If already exists erases all data of previous one.)
	"w+" -> Create a new text file for read / write
			(If already exists erases all data of previous one.)

	"a"	-> Append at the end of a existing text file or Create a new file for write.		
	"a+" -> Append at the end of a existing text file or Create a new text file for 		read / write.

	rb,rb+,wb,wb+,ab,ab+ -> For binary files.

	fclose(FILE* );
	-> Save changes.

	fflush(FILE* );

	fscanf(FILE*,"%d" , &variable);
	fgets(String_Name,Maximum_Size_Of_Input_String,FILE*)
	fprintf(FILE*,"%d" , variable);
	fputs(String_Name,FILE*)

	int fgetc(FILE*);
	fputc(char,FILE*);


	freopen(File_Path,Mode,stdin); 

	fread(&Variable,size,num,FILE*);
	fwrite(&Variable,size,num,FILE*);

	fseek(FILE*,To,From);
	From-> SEEK_SET
		   SEEK_CUR
		   SEEK_END
	ftell(FILE*);		
*/


int main()
{

	FILE* Ptr1;
	Ptr1=fopen("Data.txt","w");
	if(!Ptr1) return 1;
	fprintf(Ptr1,"%d\n",1905072);
	fprintf(Ptr1,"Dihan\n"); 
	fputs("Pass\n",Ptr1);   // Unlike puts , needs \n for new line
	fputc('X',Ptr1);
	fputc('\n',Ptr1);
	fputc('X',Ptr1);
	fclose(Ptr1);


	int Roll;
	char Name[10];
	Ptr1=fopen("Data.txt","r");
	if(!Ptr1) return 2;
	fscanf(Ptr1,"%d",&Roll);
	fgets(Name,19,Ptr1);	// Unlike gets , string size can be limited
	fgetc(Ptr1);
	fclose(Ptr1);


	// To use normal functions while working with files
	// freopen("Input.txt","r",stdin);		
	// freopen("Output.txt","w",stdout);	// Can't go to normal stream


	Ptr1=fopen("Data.txt","r");
	if(!Ptr1) return 3;
	fseek(Ptr1,0,SEEK_END);
	long a=ftell(Ptr1);		// Measure size character by character in text mode
	printf("%d",a);
	fclose(Ptr1);
}