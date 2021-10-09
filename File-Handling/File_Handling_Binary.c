#include <stdio.h>
#include <string.h>

struct
{
	char Name[20];
	int Roll;
}Student={"Dihan",72};
int main()
{
	FILE* Out;
	Out=fopen("Binary.txt","wb");
	fwrite(&Student,sizeof(Student),1,Out);
	fclose(Out);

	strcpy(Student.Name,"Ohi");
	Student.Roll=127;
	Out=fopen("Binary.txt","ab");
	fwrite(&Student,sizeof(Student),1,Out);
	fclose(Out); 


	FILE* In;
	In=fopen("Binary.txt","rb");
	char Name[20];int Roll;
	while(1)
	{
		if(fread(Name,sizeof(Name),1,In)!=1) break;
		if(fread(&Roll,sizeof(Roll),1,In)!=1) break;
		printf("%s %d\n",Name,Roll);
	}
	
	fclose(In);
	
}