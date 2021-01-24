/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

#include <stdio.h>
#define Pi  3.141592654
#define MAX 10
#define max(a,b) (a>b?(a):(b))
typedef struct {
	double Real,Imag;
}Complex;

Complex CSub(Complex,Complex);
Complex CMul(Complex,Complex);
Complex CAdd(Complex,Complex);
Complex Determinant(Complex [2][2]);
double CAbs(Complex);
void CPrint(Complex);

Complex CDiv(Complex z1,Complex z2)
{    
      if (z2.Real == 0 && z2.Imag == 0)
      {
      	printf("Division by 0 + 0i isn't allowed.");
      }        
      else
      {
      	double x,y,z;
        x = z1.Real*z2.Real + z1.Imag*z2.Imag;
        y = z1.Imag*z2.Real - z1.Real*z2.Imag;
        z = z2.Real*z2.Real + z2.Imag*z2.Imag;
       	return {x/z,y/z};
      }
      return {0,0};
}
void Equation(Complex x[2][2],Complex y[2][1])
{
    Complex det[3];
    int i, j, k;

    det[0] = Determinant(x);
    

    if(!det[0].Real&&!det[0].Imag)
    {
        puts("No Solution\n");
        return;
    }

    puts("Solution :");
    printf("\ta : ");
    CPrint(det[0]);
    for (i = 1; i <= 2; i++)
    {    	
        Complex temp[2][2];
        for (j = 0; j < 2; j++)
        {
            if (j != i - 1)
            {
                for (k = 0; k < 2; k++)
                {
                    temp[j][k]=x[j][k];
                }
            }

            else
            {
                for(k=0;k<2;k++)
                {
                    temp[j][k]=y[k][0];
                }
            }
        }
        det[i]=Determinant(temp);
        printf("\t%c : ",'a'+i);
        CPrint(det[i]);
    }
    puts("\n\n*************************************\n");
    for(i=1;i<=2;i++)
    {
    	Complex temp=CDiv(det[i],det[0]);
    	printf("\t%c : ",'w'+i);
        CPrint(temp);
    }
    puts("\n*************************************\n");
} 

Complex Determinant(Complex x[2][2])
{
	return CSub(CMul(x[0][0],x[1][1]),CMul(x[0][1],x[1][0]));
}


Complex CAdd(Complex z1,Complex z2)
{
	return {z1.Real+z2.Real,z1.Imag+z2.Imag};
}

Complex CSub(Complex z1,Complex z2)
{
	return {z1.Real-z2.Real,z1.Imag-z2.Imag};
}

double CReal(Complex z)
{
	return z.Real;
}
double CImag(Complex z)
{
	return z.Imag;
}

double AbsF(double n)
{
	return n<0?-n:n;
}


void CPrint(Complex z)
{
	if(z.Real!=0) 
	{
		printf("%g",z.Real);
		if(z.Imag>0.0)
		{
			putchar('+');
			putchar('j');
		}
	}

	if(z.Imag!=0)
	{
		if(AbsF(z.Imag)!=1.0)
		{
			if(z.Imag<0)
			{
				printf("-j%g",AbsF(z.Imag));
			}	
			else
			{
				printf("%g",z.Imag);
			}		
			
		}
		else if(z.Imag==-1)
		{
			putchar('-');
			putchar('j');
		}
		
	} 
	puts("");
}


Complex Conj(Complex z)
{
	return {z.Real,-z.Imag};
}

Complex CMul(Complex z1,Complex z2)
{
	return {z1.Real*z2.Real-z1.Imag*z2.Imag,z1.Real*z2.Imag+z1.Imag*z2.Real};
}


int main(void) 
{ 
	Complex x[2][2];
	Complex y[2][1];
	int i,j;


	printf("Enter 2 X 2 Matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf%lf",&x[i][j].Real,&x[i][j].Imag);
		}
	}
	while(getchar()!='\n');
	printf("Enter 2 X 1 Matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			scanf("%lf%lf",&y[i][j].Real,&y[i][j].Imag);
		}
	}

	puts("\n\n\n--------------------------------\n\n");
	Equation(x,y);
	puts("\n\n--------------------------------\n\n");
}

/*

.4133 .44 -.08 .06                
-.08 .06 .18 .06


-10 17.3205
5 0

*/