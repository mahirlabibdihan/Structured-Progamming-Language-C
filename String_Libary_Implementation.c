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
#include<string.h>
#include<stddef.h>
int i;

size_t strlen(const char* s)
{
    const char *c=s;
    while(*c++);
    return c-s-1;
}

char* strlwr(char* s)
{
    int i;
    for(i=0;*(s+i)!='\0';i++)
    {
        if(*(s+i)<97) *(s+i)+=32;
    }
    return s;
}

char* strupr(char* s)
{
    int i;
    for(i=0;*(s+i)!='\0';i++)
    {
        if(*(s+i)>96) *(s+i)-=32;
    }
    return s;
}
char* strrev(char* s)
{
   int i,n=strlen(s);
   for(i=0;i<n-i-1;i++)
   {
      s[i]^=s[n-i-1]^=s[i]^=s[n-i-1];
   }
   return s;
}

char* strcpy(char* s,const char* x)
{
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        s[i]=x[i];
    }
    s[i]='\0';
    return s;
}

char* strncpy(char* s,const char* x,size_t n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i]=x[i];
    }
    s[i]='\0';
    return s;
}

char* strcat(char* s,const char* x)
{
    int i,len=strlen(s);
    for(i=len;i<len+strlen(x);i++)
    {
        s[i]=x[i-len];
    }
    s[i]='\0';
    return s;
}

char* strncat(char* s,const char* x,size_t n)
{
    int i,len=strlen(s);
    for(i=len;i<len+n;i++)
    {
        s[i]=x[i-len];

    }
    s[i]='\0';
    return s;
}

int strcmp(const char* s,const char* x)
{
    int i;
    for(i=0;s[i]!='\0'||x[i]!='\0';i++)
    {
        if(s[i]>x[i]) return 1;

        else if(s[i]<x[i]) return -1;
    }

    return 0;
}

int main()
{
    int i;
    char s[20]="Dihan";
    char x[20]="Ohi";
    strcat(s,x);
    puts(s);
}
