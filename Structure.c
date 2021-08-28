#include<stdio.h>
#include<string.h>
#include<stdlib.h>



// == not possible
// structure follows scope rules
// structure elements can't be initialized in c


/*############################################################### T Y P E     O F     S T R U C T U R E      D E C L A R A T I O N S ################################################################*/
	
	struct SN1; //forward declaration
	// 1 .  Declaring a structure whose name is SN1
	struct SN1
	{
	  int x;
	};


	// 2 .  Declaring a structure whose name is SN2 and a struct variable whose name is SV1 
	struct SN2
	{
	  int x;
	}SV1;


	// 3 .  Declaring a structure whose name is SN3 and a struct variable whose name is SV2 and Initializing SV1 .
	struct SN3
	{
	  int x,y;
	}SV2={10,20};


	// 4 .  Declaring a structure with no name and a struct variable whose name is SV3 . We can not further declare any other variable of this structure .
	struct
	{
	  int x;
	}SV3;


	typedef struct SN1 SA1; // Making a alias for SN1 structure as SA1 .  We can use struct SN1 or SA1 to declare new struct variables further .


	// 5 . Declaring a structure whose name is SN4 and making a alias for this structure SA3 . We can use struct SN4 or SA3 to declare new struct variables further .
	typedef struct SN4
	{
	  int x;
	}SA3;


	// 6 . Declaring a structure with no name and making a alias for this structure SA4 . We can use SA4 to declare new struct variables further .
	typedef struct
	{
	  int x;
	}SA4;

/*###################################################################################################################################################################################################*/








/*################################### S I Z E    O F    S T R U C T U R E #####################################*/

	// Size of structure is not always summation of all the variables size.
	// It is same for a structure where sizeof each variable is same.
	typedef struct{
		char a;
		int b;
		char c;
	}S1;
	//12 bytes


	//If there are different data type variable in a structure , padding occurs.
	//Structure Padding : Size of structure must be multiple of the sizeof highest datatype.

	typedef struct{
		char a;
		int b;
		char c;
	}S2;
	//12 bytes
	// _____ _____ _____ _____
	//|     |     |     |     |
	//|  a  |     |	    |     |
	//|_____|_____|_____|_____|
	//|                       |
	//|           b           |
	//|_____ _____ _____ _____|
	//|     |     |     |     |
	//|  c  |     |	    |     |
	//|_____|_____|_____|_____|



	struct x{
		int a;
		char b[96];
		double c;
	};
	// 112 bytes
	// _______________________ _____ _____ _____ _____
	//|                       |     |     |     |     |
	//|  		  a           |b[0] |b[1] |b[2] |b[3] |
	//|_____ _____ _____ _____|_____|_____|_____|_____|
	//|     |     |     |     |     |     |     |     |
	// ................................................
	// ................................................
	// ................................................
	//|_____|_____|_____|_____|_____|_____|_____|_____|
	//|     |     |     |     |     |     |     |     |
	//|b[92]|b[93]|b[94]|b[95]|		|	  |		|	  |
	//|_____|_____|_____|_____|_____|_____|_____|_____|
	//|                     						  |
	//|            			  c           			  |
	//|_______________________________________________|



	typedef struct{
		char a;
		char b;
		int c;
	}S3;
	// 8 bytes
	// _____ _____ _____ _____
	//|     |     |     |     |
	//|  a  |  b  |     |     |
	//|_____|_____|_____|_____|
	//|                       |
	//|           c           |
	//|_______________________|


	/***Struct elements can only be stored on the nth byte . Where n is the multiple of the size of the element .***/
	typedef struct{
		int a;
		char b;
		short c;
	}S4;
	// 8 bytes
	// _______________________
	//|                       |
	//|           a           |
	//|_____ _____ ___________|
	//|     |     |           |
	//|  b  |     |     c     |
	//|_____|_____|___________|

	typedef struct{
		int a;
		char b;
		short c;
		char d;
	}S5;
	//12 bytes
	// _______________________
	//|                       |
	//|           a           |
	//|_____ _____ ___________|
	//|     |     |           |
	//|  b  |     |     c     |
	//|_____|_____|_____ _____|
	//|     |     |     |     |
	//|  d  |     |	    |     |
	//|_____|_____|_____|_____|

// For Details : "https://www.geeksforgeeks.org/is-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member/"
/*#############################################################################################################*/








/*################################ Array pass by value using Structure ##################################*/

	int i;
	struct Array
	{
		int x[5];
		int a;
	}Arr={{1,2,3,4,5},6};  // Array Initialization

	void ChangeArray(struct Array Arr)
	{
		Arr.x[0]=10;

		printf("After Change : ");
		for(i=0;i<5;i++) printf("%d ",Arr.x[i]);puts("");
	}

	void ArrayPass()
	{	
		printf("Before Change : ");
		for(i=0;i<5;i++) printf("%d ",Arr.x[i]);puts("");
		ChangeArray(Arr);
		printf("After Change(Main Array) : ");
		for(i=0;i<5;i++) printf("%d ",Arr.x[i]);puts("");
	}

/*#######################################################################################################*/




// static variable can't be declared in structure .
// struct Static{        
// 	static int a;
// };      // Invalid


// Function Name , Struct Name, Variable Name doesnot conflict. It can be same.
struct main
{
	int main;
};



// Nested Structure - Can't be the same structure for variable. Can be same for pointer.
// Because size of pointer is fixed (8 bytes ) . But size of a nested structure variable can't be specified .
struct Point
{
	int a;
	struct Point *x;
	// struct Point x; // Incorrect
};






void AssignStructure()
{	
	struct Point P;  
	P.a=10;
	P.x->a=10; // For Nested structure

	struct Point Q=P;

	struct Point *S=&P;    // Structure Pointer 
	(*S).a=10;
	S->a=10;  // Both are same
	// printf("%d \n",S->a);
}


struct Day {
	int Good;
	int Bad;
};

struct Day Today = {
	.Good=10,
	.Bad=30
};

void Initialize()
{
	struct Day a={10,20};
	struct Day b={.Bad=20};
	struct Day c=a;
}


struct
{
	char Name[20];
	int Roll;
	int Position;
}Student={.Roll=50}; // Initialize a specific variable from middle




// Bitfield  :  Allocate memory to variables as our wish .
// sizeof() can't be applied to bitfields
// We can't take input to bitfields from user . But We can assign to bitfields .
// Can not take address of Bit-Field

struct BitField{
	unsigned a:4;   // size of a is 4 Bit
}Bit;





void Swap(struct Day *a, struct Day *b)
{
	struct Day temp=*a;
	*a=*b;
	*b=temp;
}





// Flexible Array Member
struct Flex
{
	int Roll;
	char Name[];   // flexible array member // need another variable in the structure to declare flexible array // It must be the last element within the structure
};
void FAM();
int main()
{	

	// scanf("%u",&Bit.a); // Incorrect
	Bit.a=10;
	// printf("%u\n",Bit.a);
	printf("%d\n",sizeof(struct x)); 

	FAM();
	AssignStructure();
	ArrayPass();

	strcpy(Student.Name,"Dihan");
	Student.Position=10;
	printf("%u",Student);
}




struct Flex* Create(struct Flex *s,int Roll,char Name[])
{
	s=(struct Flex*)malloc(sizeof(*s)+sizeof(char)*(strlen(Name)+1));
	s->Roll=Roll;
	strcpy(s->Name,Name);
	return s;
}

void FAM()
{
	struct Flex *s=Create(s,10,"Dihan");
	// printf("%s\n",s->Name);
	struct Flex *r=(struct Flex*)malloc(sizeof(*s)+sizeof(int)*10);
}
//&Student.Name[0] , &Student ,Student--> 4202560

//Student --> 4294953984


// typedef struct{
// 	unsigned char R,G,B;
// }RGB;

// RGB Black={0,0,0};
// RGB White={255,255,255};
// RGB Red={255,0,0};
// RGB Green={0,255,0};
// RGB Blue={0,0,255};
// RGB Yellow={255,255,0};
