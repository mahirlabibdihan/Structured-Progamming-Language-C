
#a /*1D character array*/

1. //takes input till space//takes one word as input//
{
    int n;

    scanf("%d",&n);

    char x[n];

    scanf("%s",x);

    printf("%s",x);
    printf("%s\n",x);||puts(x);//print enter after output.
}


2. //takes input till enter//takes one line as input//
{
  int n;

  scanf("%d\n",&n);//can press enter after writing n and before writing string.
  scanf("%d ",&n);//can,t press enter. But can press space after writing n and before writing string.
  scanf("%d",&n);//If we press enter won't take further input.If we press space will take input as a part of the string.

  char x[n];

  gets(x);
  scanf("%[^\n]",x);

  printf("%s",x);//prints one word
  printf("%s\n",x);||puts(x);//prints one line
}



#b /*2D character array*/

1. //takes n words of length atmost m-1//
{
    int n,m,i;

  scanf("%d %d",&n,&m);

  char x[n][m];

  for(i=0;i<n;i++)
     scanf("%s",x[i]);

  for(i=0;i<n;i++)
  printf("%s ",x[i]);//print words in same line//prints n words
  printf("%s\n",x[i]);||puts(x);//print words in different line//prints n lines.

}


2. //takes n lines  as input//
{
   int n,m,i;

  scanf("%d %d\n",&n,&m);

  char x[n][m];

  for(i=0;i<n;i++)
     gets(x[i]);
    // scanf("%[^\n]\n",x[i]);


  for(i=0;i<n;i++)
  printf("%s\n",x[i]);//puts(x[i]);

}


#c /*3D character array*/

1. //takes n lines(consisting m words) as input//
{
    int n,m,i,j;

  scanf("%d %d",&n,&m);

  char x[n][m][10];

  for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        scanf("%[^\n]",x[i][j]);
        scanf("%s",x[i][j]);
}

  for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
      printf("%s ",x[i][j]);

     printf("\n");
}

}
