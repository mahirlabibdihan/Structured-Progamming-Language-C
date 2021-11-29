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

size_t Strlen(const char* s)
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;

    // const char *c=s;
    // while(*c++);
    // return c-s-1;
}

char* Strlwr(char* s)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]<'a') s[i]+='a'-'A';
        // s[i]=((s[i]%'A')%('a'-'A'))+'a';  
    }
    return s;
}

char* Strupr(char* s)
{
    int i;
    for(i=0;*(s+i)!='\0';i++)
    {
        if(s[i]>='a') s[i]-='a'-'A';
        // s[i]=((s[i]%'A')%('a'-'A'))+'A';
    }
    return s;
}
char* Strrev(char* s)
{
    int i,j;
    for(i=0,j=Strlen(s)-1;i<j;i++,j--)
    {
         char c=s[i];
         s[i]=s[j];
         s[j]=c;
    }


    // int i=0,j=Strlen(s)-1;
    // while(i<j)
    // {
    //      s[i++]^=s[j--]^=s[i]^=s[j];
    // }

    // int i;
    // for(i=0;i<n-i-1;i++)
    // {
    //      s[i]^=s[n-i-1]^=s[i]^=s[n-i-1];
    // }
   return s;
}

char* Strcpy(char* s,const char* x)
{
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        s[i]=x[i];
    }
    s[i]='\0';
    return s;
}

char* Strncpy(char* s,const char* x,size_t n)
{
    int i;
    for(i=0;i<n&&x[i]!='\0';i++)
    {
        s[i]=x[i];
    }
    s[i]='\0';
    return s;
}

char* Strcat(char* s,const char* x)
{
    int i,len=Strlen(s);

    for(i=0;x[i]!='\0';i++)
    {
        s[len+i]=x[i];
    }
    s[len+i]='\0';
    return s;
}

char* Strncat(char* s,const char* x,size_t n)
{
    int i,len=Strlen(s);
    for(i=0;i<n&&x[i]!='\0';i++)
    {
        s[i+len]=x[i];
    }
    s[len+i]='\0';
    return s;
}

int Strcmp(const char* s,const char* x)
{
    int i;
    for(i=0;s[i]!='\0'||x[i]!='\0';i++)
    {
        if(s[i]>x[i]) return 1;
        else if(s[i]<x[i]) return -1;
    }
    return 0;
}

int Strncmp(const char* s,const char* x,int n)
{
    int i;
    for(i=0;i<n&&(s[i]!='\0'||x[i]!='\0');i++)
    {
        if(s[i]>x[i]) return 1;
        else if(s[i]<x[i]) return -1;
    }
    return 0;
}

char* Strchr(const char* s,int c)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c) return (char*)s+i;
    }
    return NULL;
}

void StrIn(char* s,int n)
{
    int i;
    char c=0;
    for(i=0;(c=getchar())!='\n'&&i<n;i++)
    {
        s[i]=c;
    }
    s[i]='\0';
}


int main()
{
    int i;
    char s[20]="Dihan";
    char x[20]="Ohi";

    Strncat(s,x,4);
    puts(Strrev(s));
}
