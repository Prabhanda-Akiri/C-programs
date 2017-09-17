#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct count
{
    int c;
    char ch;
};
int main()
{
  int n,m,i,j,k=0,r=0,h=0,p=0,q=0,c;
  char a[100],b[100];
  struct count a1[100],b1[100];
  
  scanf("%s",a);
  scanf("%s",b);
  
  m=strlen(a);
  n=strlen(b);
  
  for(i=0;i<m;i++)
  {
     for(j=1;j<p+1;j++)
     {
         if(a1[j].ch==a[i])
         {
            k=5;
            a1[j].c++;
         }
         
     }
     if(k!=5)
     {
        a1[p+1].ch=a[i];
        a1[p+1].c=1;
        p=p+1;
     }
     k=0;
    
  }
  k=0;
  for(i=0;i<n;i++)
  {
     for(j=1;j<q+1;j++)
     {
         if(b1[j].ch==b[i])
         {
            k=5;
            b1[j].c++;
         }
         
     }
     if(k!=5)
     {
        b1[q+1].ch=b[i];
        b1[q+1].c=1;
        q=q+1;
     }
     k=0;
  }
  
  for(i=1;i<p+1;i++)
  {
      for(j=1;j<q+1;j++)
      {
          if(a1[i].ch==b1[j].ch)
          if(a1[i].c==b1[j].c)
          h=5;
      }
      
      if(h!=5)
      {
          r=2;
          break;
      }
      h=0;
  }
  if(r==2)
  printf("-1");
  
  else
  {
      c=0;
         for(i=0;i<m;i++)
      {
          if(a[i]==b[i])
          c++;
      }
      
      printf("%d",c);
  }
}
