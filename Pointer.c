#include<stdio.h>
int main()
{
//    int n,*a,i;

//   a;//address of first element of array(&x[0]);

//      &a;/*address of pointer a;(no use)*/ a!=&a;

// #      2D Array                                     1D Array

//     int x[n][n];                                    int x[n];


//     a=x[0];                                         a=x;
//     a=&x[0][0];                                     a=&x[0];



// &x+i = x+i = *(x+i) = &x[i] = x[i] = &x[i][0];

// x[i]+1=&x[i][1];                                    x+1=&x[1];

// &x[i]+1=&x[i+1][0];                                 &x+1=&x[n];




// Address of 1st ele:  &x[0][0];                      &x[0];
//                      x[0];                          x;
//                      &x[0];                         &x;
//                      *x;                            &0[x];
//                      x;
//                      &x;





// Address of element:  &x[i][j];                      &x[i];
//                      *(x+i)+j;                      x+i;
//                      x[i]+j;                        &i[x];




//      Array element:  x[i][j];                       x[i];
//                      *(*(x+i)+j);                   *(x+i);
//                      *(x[i]+j)                      i[x];


    int a[5];
    int *b=a;
    int c[5][5];
    int (*d)[5]=c;


    char* p,**q;

    //short r=p;
    q=&p;
    printf("%d %d\n",sizeof p,sizeof q);

    // int *ptr[5]; // Array of 5 integer pointer
    // int *(ptr[5]); // Array of 5 integer pointer
    // int (*ptr)[5]; //Pointer to an array of 5 integer



    /**************Changing the value of constant variable*************/
    const int C=10;
    int * P=(int*) &C;
    *P=8;
    printf("%u\n",C); 

}



