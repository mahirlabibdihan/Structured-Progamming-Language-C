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

//Prints the bitpattern of char,int,long,long long ,unsigned
#define BitPattern(n) {\
    unsigned long long mask=1LL<<(sizeof((n))*8-1),i;\
    for(i=0;i<sizeof((n))*8;i++,mask>>=1) printf("%d",(n)&mask?1:0); puts("");\
}

void PrintBit(unsigned n)
{
    int i;
    unsigned mask=1<<(sizeof((n))*8-1);
    for(i=0;i<sizeof((n))*8;i++)
    {
        printf("%d",!!(n&mask));
        n<<=1;
    }
    puts("");
}

void PrintBit2(unsigned n)
{
    int Binary=0;
    unsigned mask=1;
    while(n)
    {
        Binary=Binary*10+!!(n&mask);
        n>>=1;
    }
    printf("%d\n",Binary);
}

void RecursivePrintBit(unsigned n)
{
    static int i=0;
    if(i++==sizeof(n)*8) 
    {
        puts("");return;
    }
    unsigned mask=1<<31;
    printf("%d",!!(n&mask));
    RecursivePrintBit(n<<1);
}

void RecursivePrintBit2(unsigned n)
{
    static int Binary=0;
    if(!n) 
    {
        printf("%d\n",Binary);
        return;
    }
    unsigned mask=1;
    Binary=Binary*10+!!(n&mask);
    RecursivePrintBit2(n>>1);
}

void ReverseBit(unsigned n)
{
    PrintBit(n);
    unsigned mask1=1,mask2=1<<31;
    while(mask1<mask2)
    {
        if(!!(mask1&n)!=!!(mask2&n))
        {
            n=mask1^n^mask2;
        }
        mask1<<=1;
        mask2>>=1;
    }
    PrintBit(n);
}
void swap2(int *a,int *b)
{
    // *a=*a^*b;
    // *b=*a^*b;
    // *a=*a^*b;

    // *a^=*b;
    // *b^=*a;
    // *a^=*b;
    *a^=*b^=*a^=*b;
}
int main()
{
    int n,x;

    // if(n&1) cout<<"Odd"; //if(n%2) cout<<"Odd";

    // if(n&n-1) cout<<"NO";
    // else cout<<"YES";   //2^n check

    // if(n&n+1) cout<<"NO";
    // else cout<<"YES";   //2^n-1 check
    // puts("");



    // 1<<n; //2^n;

    // x<<n; //x*(2^n);
    // x>>n; //x/(2^n);

    // x&(2^n-1); //x%(2^n);


// left shift
//  x<<n    // 0=<n<width of data type(for int 32)
//  x = 10110100011
//  x<<5 = 100011----- //the empty space will always(signed/unsigned) fill up by 0 
//       = 1000110000


// right shift
// x>>n      // 0=<n<width of data type(for int 32)
//   x = 10110100011
//x>>5 = -----101101 //the empty space will fill up by 0 when x is unsigned 
// If x is signed -> the empty space will fill up by 0 when the sign bit is 0
//                -> the empty space will fill up by 1 when the sign bit is 1

//unsigned x = 10110100011
//      x>>5 = 00000101101

//     int x = 00110100011
//      x>>5 = 00000001101

//     int x = 10110100011
//      x>>5 = 11111101101


float f=5.4;
int* a=(int*)&f;
int exp=*a&(unsigned char)~0 << 23;
// BitPattern(exp);
unsigned mask=1<<1;


BitPattern(46);
BitPattern('ABCD');
PrintBit(0);
PrintBit2(0);
RecursivePrintBit(0);
RecursivePrintBit2(0);
ReverseBit(4544);
// printf("%d\n",mask);
// BitPattern(a<<20);
// printf("%d",exp>>23);

}
//0 10000001 01011001100110011001101


/*

(70)8  ->       00111000
                11000111   (1's)
                     + 1
                --------
(-70)8 ->       11001000   (2's)



(1010)2 ->      00001010
(-70)8  ->  +   11001000 
            ------------
                11010010  -> (-46)10  ----> Answer : (1010)2-(70)8 = (-46)10
        (1's)   00101101       ^
                     + 1       |
                --------       | 
        (2's)   00101110  -> (46)10              

*/