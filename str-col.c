#include<stdio.h>
#include<string.h>

int main() {
   int n,i,j=0,k,l=-1;
   char s[1000],a[500][20];
   scanf("%[^\n]",s);
   n=strlen(s);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       if(s[i]!=' ')
       {
           l=l+1;
           a[j][l]=s[i];
           
       }
       
       else
       {
           a[j+1][0]=' ';
           j=j+2;
            l=-1;}
   }
   l=0;
   for(i=0;i<j+1;i++)
   {    
       
     l=l+strlen(a[i]);
     
     if(l<=k)
     {
         printf("%s",a[i]);
         
     }
     else
     {
         printf("\n");
         l=strlen(a[i]);
         printf("%s",a[i]);
        
     }
   }
   
}
