#include<stdio.h>
#include<string.h>
int check(char,char);
int alpha(char);

int main()
{
   char a[400];
   int i,n,count=0;
   
   scanf("%[^\n]",a);
   n=strlen(a);
  
  for(i=1;i<n;i++)
  {
    if(check(a[i-1],a[i]))
    {
      count++;
    }
  }
  printf("%d",count); 
}

int check(char s,char r)
{
    if (alpha(s))
    {
        if(alpha(r))
        return 0;
        else 
        return 1;
    }
    else
    return 0;
}

int alpha(char c)
{
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        return 1;
    else
        

    return 0;
}
