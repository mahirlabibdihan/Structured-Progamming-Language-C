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

int f()
{
	return 1,2;
}
int main()
{

	
	FILE *Ptr=fopen("Data.txt","w");
	int i;
	for(i=0;i<10;i++)
	{
		// printf("%c %d %c %d %d %d %d %c\n",*(Ptr->_ptr),Ptr->_cnt,*(Ptr->_base),Ptr->_flag,Ptr->_file,Ptr->_charbuf,Ptr->_bufsiz,*(Ptr->_tmpfname));
		fprintf(Ptr,"%d\n",i);
	}
	// FILE* x=fopen("TEST.txt","r+");

	// // fscanf(x,"%s",s);
	// // while(EOF!=scanf("%s",&s[i])) i=strlen(s);
	// // while(NULL!=gets(&s[i])) i=strlen(s);
	// // while(gets(&s[i])) i=strlen(s);
	// if(x==NULL) puts("FAILED");
	
	// int * a;
	// fscanf(x,"%d",&a);
	// // fprintf(x,"%d",a);
	// fscanf(x,"%d",&a);
	// fprintf(x,"%d",a);
	// // fseek(x,-4,SEEK_END);
	// printf("%d\n",ftell(x));
	// int a=1;
	// fwrite(&a,sizeof(a),1,x);
	// a++;
	// fwrite(&a,sizeof(a),1,x);
	// a++;
	// fwrite(&a,sizeof(a),1,x);
	// a++;
	// fwrite(&a,sizeof(a),1,x);
	// a++;
	// fwrite(&a,sizeof(a),1,x);
	// a++;
	// while(fread(&a,sizeof(a),1,x))
	// {
	// 	printf("%d ",a);
	// }
	// printf("%d\n",a);

	// scanf("%[^\n]", s);
	// puts(s);

	// fprintf(x,"\n");
	// fprintf(x,"Dihu");

	// int n;
	// scanf("%d",n);
	// fflush(stdin);
	// fgets(s,10,x);
	// puts(s);
	// printf("\%");

	// int n;
	// // scanf("%d",&n);
	// scanf("%s",&n);
	// printf("%d",n); 
	// fclose(x);
}