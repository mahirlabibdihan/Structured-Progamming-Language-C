#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int rand(); // Generates Random numbers in the range [0,RAND_MAX]---[ RAND_MAX = 2147483647 ]
// Uses a pseudo-random number generator algorithm .
//The generator starts from the previously generated number and performs certain transformations in order to produce the next number.
// The initial number from which the generator starts (but does not produce) is called the seed of the generator. 
// The initial value of the seed is always 1 unless we change it . Thus we always get the same sequence of numbers .


void srand(unsigned int); //  Changes the seed // Takes an unsigned integer value to be used as seed by the pseudo-random number generator algorithm .
int main()
{

	//If we don't use srand() it will generate the same sets of numbers in every execution. Because random number uses a fixed algorithm to generate numbers . So everytime it will use the same algorithm and generate same number .
	printf("%d\n",rand());//Generates Same number every time

	//If we use srand() and a pass an unsigned integer to it , rand() will generate numbers on the basis of this integer . But to generate different number on every execution we need to pass different numbers to srand() everytime .
	srand(11);printf("%d\n",rand()); //Generates Same number every time

	// To automatically pass different number to srand() each time we can pass time(NULL) to srand() . time(NULL) returns  the number of seconds elapsed since January 1,1970 . So the value time(NULL) is increasing every second . Thus the generated random numbers will be different each time .
	srand(time(NULL)); printf("%d\n",rand());//Generates Different number every time
	

	// Generates 10 Random Numbers from min to max
	int i,min=1,max=6;
	for(i=0;i<10;i++)
	printf("%d\n",rand()%(max-min+1)+min);
 
	printf("%d\n",RAND_MAX);
} 





/************************ IMPLEMENTATION ***************************/
#define a (1103515245)
#define c (12345)
#define m ((unsigned)~0>>1) // RAND_MAX
static unsigned int seed = 1;
void srand(unsigned int s){
	seed=s;
}
int rand(){
	seed=(a*seed + c) % (m+1);
}
/*******************************************************************/