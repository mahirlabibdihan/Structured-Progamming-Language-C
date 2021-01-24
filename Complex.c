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

Complex CMul(Complex,Complex);
Complex CAdd(Complex,Complex);
Complex Determinant(Complex [][MAX],int);
double CAbs(Complex);
void CPrintP(Complex);
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
void Equation(Complex x[][MAX],Complex y[][MAX], int n)
{
    Complex det[n + 1];
    int i, j, k;

    puts("");


    det[0] = Determinant(x, n);
    // printf("a->");
    // CPrint(det[0]);
    // puts("");
    if(!det[0].Real&&!det[0].Imag)
    {
        puts("No Solution\n");
        return;
    }
    puts("Solution :");
    for (i = 1; i <= n; i++)
    {
    	
        Complex temp[MAX][MAX];
        for (j = 0; j < n; j++)
        {
            if (j != i - 1)
            {
                for (k = 0; k < n; k++)
                {
                    temp[j][k]=x[j][k];
                }
            }

            else
            {
                for(k=0;k<n;k++)
                {
                    temp[j][k]=y[k][0];
                }
            }

        }
        det[i]=Determinant(temp,n);
      //    printf("%c->",'a'+i);
    	 // CPrint(det[i]);
    	 // puts("");
    }
    for(i=1;i<=n;i++)
    {
        // printf("%c = %.5g\n",96+i,det[i]/det[0]);
    	Complex temp=CDiv(det[i],det[0]);
        CPrint(temp);
        printf("->");
        CPrintP(temp);
    }
    puts("");
} 
void Cofactor(Complex x[][MAX],Complex temp[][MAX], int r, int c, int n)
{
    int i = 0, j = 0, row, col;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row != r && col != c)
            {
                temp[i][j++] = x[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
Complex Determinant(Complex x[][MAX], int n)
{
    Complex Det = {0,0};
    int i;
    double sign = 1;
    if (n == 1)
    {
        return x[0][0];
    }
    Complex temp[MAX][MAX];
    for (i = 0; i < n; i++)
    {
        Cofactor(x, temp, 0, i, n);
        Det = CAdd(Det,(CMul({sign,0},CMul(Determinant(temp, n - 1),x[0][i]))));
        sign *= -1;
    }
    return Det;
}

double Sqrt(double n)
{
	double l=0.0,r=max(n,1),m=0;
	if(n<0) 
	{
		puts("Root of negative number not possible.");
		return 0;
	}
	while(r-l>.000000001)
	{
		double temp=(l+r)/2;
		if(m==temp) break;
		m=temp;
		if(m*m>n) r=m;
		else l=m;
	}

	return m;
} 

double Sin(double Deg)
{
	int i;
	double Rad=Deg*Pi/180;

	double P=Rad,S=Rad;
	long long fact=1;
	for(i=3;i<=17;i+=2)
	{
		P*=Rad*Rad;
		fact*=i*(i-1);
		if((i/2)%2)
		{
			S-=(P/fact);
		}
		else
		{
			S+=(P/fact);
		}
		
	}
	return S;
}
double Cos(double Deg)
{
	return Sin(90-Deg);
}
double Tan(double Deg)
{
	return Sin(Deg)/Cos(Deg);
}
double ATan(double n)
{
	double l=-90,r=90,m;

	while(r-l>.00001)
	{
		m=(l+r)/2;
		if(Tan(m)>n) r=m;
		else l=m;
	}

	return m;
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

int Abs(int n)
{
	return n<0?-n:n;
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
		}
	}

	if(z.Imag!=0)
	{
		if(Abs(z.Imag)!=1.0)
		{
			printf("%g",z.Imag);
		}
		else if(z.Imag==-1)
		{
			putchar('-');
		}
		putchar('i');
	} 
	puts("");
}

double CAbs(Complex z)
{
	return Sqrt((z.Real*z.Real)+(z.Imag*z.Imag));
}

double CAng(Complex z)
{
	return ATan(1.0*CImag(z)/CReal(z));
}

void CPrintP(Complex z)
{
	printf("%g /_ %f\n",CAbs(z),CAng(z));
}

Complex Conj(Complex z)
{
	return {z.Real,-z.Imag};
}

Complex CMul(Complex z1,Complex z2)
{
	return {z1.Real*z2.Real-z1.Imag*z2.Imag,z1.Real*z2.Imag+z1.Imag*z2.Real};
}

// Complex P_C(double r,double theta)
// {
// 	return {r*Cos(theta),r*Sin(theta)};
// }

Complex CPow(Complex z,int n)
{
	if(n==0) return {1,0};
	return CMul(z,CPow(z,n-1));
}

void CPrintS(Complex z,double w)
{
	printf("%gcos(%gt+%g)",CAbs(z),w,CAng(z));
}
int main(void) 
{ 
	Complex x[MAX][MAX];
	Complex y[MAX][MAX];
	int n=2,i,j;
	printf("Number of Unknowns : ");
	
	scanf("%d",&n);

	printf("Enter %d X %d Matrix :\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lf%lf",&x[i][j].Real,&x[i][j].Imag);
			// printf("%d %d\n",x[i][j].Real,x[i][j].Imag);
		}
	}
	while(getchar()!='\n');
	printf("Enter %d X 1 Matrix :\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			scanf("%lf%lf",&y[i][j].Real,&y[i][j].Imag);
		}
	}

	// for(i=0;i<n;i++)
	// {
	// 	for(j=0;j<n;j++)
	// 	{
	// 		CPrint(x[i][j]);
	// 	}
	// }

	CPrint(Determinant(x,n));
	Equation(x,y,n);
}

/*

.4133 .44 -.08 .06                
-.08 .06 .18 .06

*/